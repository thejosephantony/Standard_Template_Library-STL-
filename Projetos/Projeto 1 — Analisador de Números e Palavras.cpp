/*
 * Analisador de Numeros e Palavras
 * Projeto prático com STL (vector, string, algoritmos)
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void limparBuffer();
void exibirMenu();
void cadastrarNumeros(vector<int>& numeros);
void mostrarNumeros(const vector<int>& numeros);
void ordenarCrescente(vector<int>& numeros);
void ordenarDecrescente(vector<int>& numeros);
void removerNumero(vector<int>& numeros);
void removerRepetidos(vector<int>& numeros);
void mostrarMaiorMenor(const vector<int>& numeros);
void cadastrarPalavras(vector<string>& palavras);
void mostrarPalavras(const vector<string>& palavras);
void ordenarPalavras(vector<string>& palavras);
void verificarPalavra(const vector<string>& palavras);
void verificarAnagramas();


int main() {
    vector<int> numeros;
    vector<string> palavras;
    int opcao;

    do {
        exibirMenu();
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        limparBuffer();

        switch (opcao) {
            case 1: cadastrarNumeros(numeros); break;
            case 2: mostrarNumeros(numeros); break;
            case 3: ordenarCrescente(numeros); break;
            case 4: ordenarDecrescente(numeros); break;
            case 5: removerNumero(numeros); break;
            case 6: removerRepetidos(numeros); break;
            case 7: mostrarMaiorMenor(numeros); break;
            case 8: cadastrarPalavras(palavras); break;
            case 9: mostrarPalavras(palavras); break;
            case 10: ordenarPalavras(palavras); break;
            case 11: verificarPalavra(palavras); break;
            case 12: verificarAnagramas(); break;
            case 0: cout << "Saindo...\n"; break;
            default: cout << "Opcao invalida!\n";
        }

        cout << "\nPressione Enter para continuar...";
        cin.get();

    } while (opcao != 0);

    return 0;
}


void limparBuffer() {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void exibirMenu() {
    cout << "\n===== ANALISADOR =====\n";
    cout << "1. Cadastrar numeros\n";
    cout << "2. Mostrar numeros\n";
    cout << "3. Ordenar numeros em ordem crescente\n";
    cout << "4. Ordenar numeros em ordem decrescente\n";
    cout << "5. Remover numero\n";
    cout << "6. Remover numeros repetidos\n";
    cout << "7. Mostrar maior e menor numero\n";
    cout << "8. Cadastrar palavras\n";
    cout << "9. Mostrar palavras\n";
    cout << "10. Ordenar palavras\n";
    cout << "11. Verificar se uma palavra existe\n";
    cout << "12. Verificar se duas palavras sao anagramas\n";
    cout << "0. Sair\n";
}


void cadastrarNumeros(vector<int>& numeros) {
    int n;
    cout << "Digite os numeros (0 para parar):\n";
    while (true) {
        cout << "> ";
        cin >> n;
        if (n == 0) break;
        numeros.push_back(n);
    }
    cout << "Cadastro concluido. Total: " << numeros.size() << " numeros.\n";
}

void mostrarNumeros(const vector<int>& numeros) {
    if (numeros.empty()) {
        cout << "Nenhum numero cadastrado.\n";
        return;
    }
    cout << "Numeros: ";
    for (int n : numeros)
        cout << n << " ";
    cout << endl;
}

void ordenarCrescente(vector<int>& numeros) {
    if (numeros.empty()) {
        cout << "Nenhum numero para ordenar.\n";
        return;
    }
    std::sort(numeros.begin(), numeros.end());
    cout << "Ordenado em ordem crescente.\n";
    mostrarNumeros(numeros);
}

void ordenarDecrescente(vector<int>& numeros) {
    if (numeros.empty()) {
        cout << "Nenhum numero para ordenar.\n";
        return;
    }
    std::sort(numeros.begin(), numeros.end(), std::greater<int>());
    cout << "Ordenado em ordem decrescente.\n";
    mostrarNumeros(numeros);
}

void removerNumero(vector<int>& numeros) {
    if (numeros.empty()) {
        cout << "Nenhum numero cadastrado.\n";
        return;
    }

    int valor;
    cout << "Digite o numero a remover: ";
    cin >> valor;

    auto it = std::find(numeros.begin(), numeros.end(), valor);
    if (it != numeros.end()) {
        numeros.erase(it);
        cout << "Numero removido com sucesso.\n";
    } else {
        cout << "Numero nao encontrado.\n";
    }
}

void removerRepetidos(vector<int>& numeros) {
    if (numeros.empty()) {
        cout << "Nenhum numero cadastrado.\n";
        return;
    }

    std::sort(numeros.begin(), numeros.end());
    auto last = std::unique(numeros.begin(), numeros.end());
    numeros.erase(last, numeros.end());

    cout << "Numeros repetidos removidos.\n";
    mostrarNumeros(numeros);
}

void mostrarMaiorMenor(const vector<int>& numeros) {
    if (numeros.empty()) {
        cout << "Nenhum numero cadastrado.\n";
        return;
    }

    auto [minIt, maxIt] = std::minmax_element(numeros.begin(), numeros.end());
    cout << "Menor numero: " << *minIt << endl;
    cout << "Maior numero: " << *maxIt << endl;
}


void cadastrarPalavras(vector<string>& palavras) {
    string palavra;
    cout << "Digite as palavras (digite 'fim' para parar):\n";
    while (true) {
        cout << "> ";
        getline(cin, palavra);
        if (palavra == "fim") break;
        if (!palavra.empty())
            palavras.push_back(palavra);
    }
    cout << "Cadastro concluido. Total: " << palavras.size() << " palavras.\n";
}

void mostrarPalavras(const vector<string>& palavras) {
    if (palavras.empty()) {
        cout << "Nenhuma palavra cadastrada.\n";
        return;
    }
    cout << "Palavras:\n";
    for (const string& p : palavras)
        cout << "  " << p << endl;
}

void ordenarPalavras(vector<string>& palavras) {
    if (palavras.empty()) {
        cout << "Nenhuma palavra para ordenar.\n";
        return;
    }
    std::sort(palavras.begin(), palavras.end());
    cout << "Palavras ordenadas alfabeticamente.\n";
    mostrarPalavras(palavras);
}

void verificarPalavra(const vector<string>& palavras) {
    if (palavras.empty()) {
        cout << "Nenhuma palavra cadastrada.\n";
        return;
    }

    string busca;
    cout << "Digite a palavra a buscar: ";
    getline(cin, busca);

    auto it = std::find(palavras.begin(), palavras.end(), busca);
    if (it != palavras.end()) {
        cout << "Palavra encontrada na posicao " << (it - palavras.begin()) + 1 << endl;
    } else {
        cout << "Palavra nao encontrada.\n";
    }
}

void verificarAnagramas() {
    string p1, p2;

    cout << "Digite a primeira palavra: ";
    getline(cin, p1);
    cout << "Digite a segunda palavra: ";
    getline(cin, p2);


    p1.erase(std::remove(p1.begin(), p1.end(), ' '), p1.end());
    p2.erase(std::remove(p2.begin(), p2.end(), ' '), p2.end());

    std::transform(p1.begin(), p1.end(), p1.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    std::transform(p2.begin(), p2.end(), p2.begin(),
                   [](unsigned char c) { return std::tolower(c); });

    std::sort(p1.begin(), p1.end());
    std::sort(p2.begin(), p2.end());

    if (p1 == p2)
        cout << "SIM. Sao anagramas." << endl;
    else
        cout << "NAO. Nao sao anagramas." << endl;
}
