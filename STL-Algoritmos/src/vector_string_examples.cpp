#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include "vector_string_examples.h"

using std::cout;
using std::endl;
using std::vector;
using std::string;

/*
    VECTOR E STRING

    vector:
    - Usado quando você precisa guardar uma sequência de dados.
    - É como um array dinâmico.
    - Muito usado em problemas com listas, números, posições, notas, alturas etc.

    string:
    - Usada para textos e sequências de caracteres.
    - Muito usada em problemas de palavras, palíndromos, comparação, contagem etc.
*/

static void imprimirVector(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

static void exemploVectorBasico() {
    cout << "\n--- vector basico ---" << endl;

    vector<int> v;

    // push_back adiciona elemento no final.
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector inicial: ";
    imprimirVector(v);

    // size retorna a quantidade de elementos.
    cout << "Tamanho: " << v.size() << endl;

    // Acesso por índice.
    cout << "v[0] = " << v[0] << endl;

    // at também acessa por índice, mas com verificação de limite.
    cout << "v.at(1) = " << v.at(1) << endl;

    // front retorna o primeiro elemento.
    cout << "Primeiro: " << v.front() << endl;

    // back retorna o último elemento.
    cout << "Ultimo: " << v.back() << endl;

    // Alterando elemento.
    v[1] = 99;

    cout << "Depois de alterar v[1]: ";
    imprimirVector(v);

    // pop_back remove o último elemento.
    v.pop_back();

    cout << "Depois do pop_back: ";
    imprimirVector(v);

    // insert insere antes da posição indicada.
    v.insert(v.begin() + 1, 50);

    cout << "Depois do insert: ";
    imprimirVector(v);

    // erase remove elemento de uma posição.
    v.erase(v.begin());

    cout << "Depois do erase: ";
    imprimirVector(v);
}

static void exemploStringBasico() {
    cout << "\n--- string basica ---" << endl;

    string nome = "joseph";
    string linguagem = "cpp";

    cout << "Nome: " << nome << endl;
    cout << "Linguagem: " << linguagem << endl;

    // Concatenação.
    string frase = nome + " estuda " + linguagem;

    cout << "Frase: " << frase << endl;

    // size e length fazem praticamente a mesma coisa em string.
    cout << "Tamanho com size(): " << frase.size() << endl;
    cout << "Tamanho com length(): " << frase.length() << endl;

    // Acesso a caracteres.
    cout << "Primeiro caractere: " << frase[0] << endl;
    cout << "Ultimo caractere: " << frase.back() << endl;

    // Alterando caractere.
    frase[0] = 'J';

    cout << "Depois de alterar primeira letra: " << frase << endl;

    // substr(posicao, quantidade) pega uma parte da string.
    string parte = frase.substr(0, 6);

    cout << "Substring frase.substr(0, 6): " << parte << endl;

    // find procura uma substring.
    size_t pos = frase.find("estuda");

    if (pos != string::npos) {
        cout << "\"estuda\" encontrado na posicao: " << pos << endl;
    } else {
        cout << "\"estuda\" nao encontrado" << endl;
    }
}

static void exemploPalindromo() {
    cout << "\n--- exemplo classico: palindromo ---" << endl;

    string s = "arara";

    string invertida = s;
    reverse(invertida.begin(), invertida.end());

    cout << "Original: " << s << endl;
    cout << "Invertida: " << invertida << endl;

    if (s == invertida) {
        cout << "Eh palindromo" << endl;
    } else {
        cout << "Nao eh palindromo" << endl;
    }
}

static void exemploContagemCaracteres() {
    cout << "\n--- contagem de caracteres ---" << endl;

    string texto = "banana";

    // Se o problema só usa letras minúsculas de 'a' até 'z',
    // podemos usar vector<int> de tamanho 26.
    vector<int> freq(26, 0);

    for (char c : texto) {
        int indice = c - 'a';
        freq[indice]++;
    }

    cout << "Texto: " << texto << endl;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            char letra = 'a' + i;
            cout << letra << " aparece " << freq[i] << " vez(es)" << endl;
        }
    }
}

void exemplosVectorString() {
    cout << "\n===============================" << endl;
    cout << "1) VECTOR E STRING" << endl;
    cout << "===============================" << endl;

    exemploVectorBasico();
    exemploStringBasico();
    exemploPalindromo();
    exemploContagemCaracteres();
}
