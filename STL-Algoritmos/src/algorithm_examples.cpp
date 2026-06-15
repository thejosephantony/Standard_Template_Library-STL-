#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

#include "algorithm_examples.h"

using std::cout;
using std::endl;
using std::vector;
using std::string;

/*
    ALGORITMOS DA STL

    Biblioteca:
        #include <algorithm>

    Alguns dos mais usados:
        sort
        reverse
        find
        count
        min_element
        max_element
        lower_bound
        upper_bound
        unique
        remove

    Observação:
        Muitos algoritmos usam intervalo semiaberto:

            [inicio, fim)

        Exemplo:
            v.begin(), v.end()

        Isso significa que começa em begin e vai até antes de end.
*/

static void imprimirVector(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

static void exemploSortReverse() {
    cout << "\n--- sort e reverse ---" << endl;

    vector<int> v = {5, 2, 8, 1, 9, 3};

    cout << "Original: ";
    imprimirVector(v);

    sort(v.begin(), v.end());

    cout << "Ordenado crescente: ";
    imprimirVector(v);

    reverse(v.begin(), v.end());

    cout << "Depois do reverse: ";
    imprimirVector(v);

    // Ordenação decrescente diretamente.
    sort(v.begin(), v.end(), std::greater<int>());

    cout << "Ordenado decrescente: ";
    imprimirVector(v);
}

static void exemploFindCountMinMax() {
    cout << "\n--- find, count, min_element, max_element ---" << endl;

    vector<int> v = {4, 7, 2, 7, 9, 7, 1};

    cout << "Vector: ";
    imprimirVector(v);

    auto it = find(v.begin(), v.end(), 9);

    if (it != v.end()) {
        cout << "Valor 9 encontrado" << endl;
    } else {
        cout << "Valor 9 nao encontrado" << endl;
    }

    int qtd7 = count(v.begin(), v.end(), 7);
    cout << "Quantidade de 7: " << qtd7 << endl;

    auto menor = min_element(v.begin(), v.end());
    auto maior = max_element(v.begin(), v.end());

    cout << "Menor valor: " << *menor << endl;
    cout << "Maior valor: " << *maior << endl;
}

static void exemploLowerUpperBound() {
    cout << "\n--- lower_bound e upper_bound ---" << endl;

    /*
        lower_bound:
            retorna o primeiro elemento >= valor

        upper_bound:
            retorna o primeiro elemento > valor

        Muito usado em problemas de busca binária, intervalos e contagem.

        IMPORTANTE:
            O vector precisa estar ordenado.
    */

    vector<int> v = {1, 2, 2, 2, 3, 5, 7};

    cout << "Vector ordenado: ";
    imprimirVector(v);

    int x = 2;

    auto lb = lower_bound(v.begin(), v.end(), x);
    auto ub = upper_bound(v.begin(), v.end(), x);

    int posLB = static_cast<int>(lb - v.begin());
    int posUB = static_cast<int>(ub - v.begin());

    cout << "lower_bound de 2: posicao " << posLB << endl;
    cout << "upper_bound de 2: posicao " << posUB << endl;

    // Quantidade de ocorrências de x em vector ordenado:
    int quantidade = static_cast<int>(ub - lb);

    cout << "Quantidade de 2: " << quantidade << endl;
}

static void exemploEraseRemoveUnique() {
    cout << "\n--- erase-remove e unique ---" << endl;

    vector<int> v = {1, 2, 3, 2, 4, 2, 5};

    cout << "Original: ";
    imprimirVector(v);

    /*
        remove não apaga fisicamente os elementos.
        Ele reorganiza o vector e retorna um novo "fim lógico".

        Por isso usamos:
            v.erase(remove(...), v.end());
    */

    v.erase(remove(v.begin(), v.end(), 2), v.end());

    cout << "Depois de remover todos os 2: ";
    imprimirVector(v);

    vector<int> repetidos = {1, 1, 2, 2, 2, 3, 3, 4};

    cout << "Com repetidos consecutivos: ";
    imprimirVector(repetidos);

    /*
        unique remove duplicatas consecutivas.
        Se quiser remover duplicatas gerais:
            1) ordene com sort
            2) aplique unique
            3) use erase
    */

    repetidos.erase(unique(repetidos.begin(), repetidos.end()), repetidos.end());

    cout << "Depois do unique: ";
    imprimirVector(repetidos);
}

static void exemploSomaPrefixada() {
    cout << "\n--- soma prefixada ---" << endl;

    /*
        Soma prefixada é muito usada para responder rapidamente:
            "qual a soma do intervalo [l, r]?"

        Exemplo:
            v = [2, 4, 1, 5, 3]

        prefixo[i] guarda a soma dos primeiros i elementos.
        Usaremos prefixo com tamanho n + 1:

            prefixo[0] = 0
            prefixo[1] = v[0]
            prefixo[2] = v[0] + v[1]
            ...

        Soma de [l, r]:
            prefixo[r + 1] - prefixo[l]
    */

    vector<int> v = {2, 4, 1, 5, 3};

    int n = static_cast<int>(v.size());

    vector<int> prefixo(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefixo[i + 1] = prefixo[i] + v[i];
    }

    cout << "Vector: ";
    imprimirVector(v);

    cout << "Prefixo: ";
    imprimirVector(prefixo);

    int l = 1;
    int r = 3;

    int somaIntervalo = prefixo[r + 1] - prefixo[l];

    cout << "Soma do intervalo [" << l << ", " << r << "]: " << somaIntervalo << endl;
}

static void exemploPairStructOrdenacao() {
    cout << "\n--- pair, struct e ordenacao ---" << endl;

    /*
        pair:
            guarda dois valores juntos.

        Muito usado para:
            - coordenadas
            - valor e índice
            - par chave/valor
    */

    vector<std::pair<int, string>> alunos = {
        {8, "Ana"},
        {10, "Bruno"},
        {7, "Carlos"},
        {10, "Daniela"}
    };

    /*
        sort em pair ordena primeiro pelo first.
        Se empatar, ordena pelo second.
    */

    sort(alunos.begin(), alunos.end());

    cout << "Alunos ordenados por nota e nome:" << endl;

    for (auto aluno : alunos) {
        cout << aluno.first << " - " << aluno.second << endl;
    }

    /*
        struct:
            quando pair fica pouco legível, use struct.
    */

    struct Pessoa {
        string nome;
        int idade;
    };

    vector<Pessoa> pessoas = {
        {"Joseph", 22},
        {"Maria", 19},
        {"Pedro", 25}
    };

    // Ordenar por idade usando função lambda.
    sort(pessoas.begin(), pessoas.end(), [](const Pessoa& a, const Pessoa& b) {
        return a.idade < b.idade;
    });

    cout << "Pessoas ordenadas por idade:" << endl;

    for (const Pessoa& p : pessoas) {
        cout << p.nome << " - " << p.idade << endl;
    }
}

void exemplosAlgoritmos() {
    cout << "\n===============================" << endl;
    cout << "3) ALGORITMOS DA STL" << endl;
    cout << "===============================" << endl;

    exemploSortReverse();
    exemploFindCountMinMax();
    exemploLowerUpperBound();
    exemploEraseRemoveUnique();
    exemploSomaPrefixada();
    exemploPairStructOrdenacao();
}
