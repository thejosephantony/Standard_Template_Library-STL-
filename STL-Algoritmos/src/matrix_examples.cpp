#include <iostream>
#include <vector>

#include "matrix_examples.h"

using std::cout;
using std::endl;
using std::vector;

/*
    MATRIZ COM vector<vector<int>>

    Uma matriz em C++ pode ser representada assim:

        vector<vector<int>> matriz(linhas, vector<int>(colunas));

    Exemplo:
        vector<vector<int>> A(3, vector<int>(4));

    Isso cria uma matriz com 3 linhas e 4 colunas.

    Acesso:
        A[i][j]
*/

static void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (int i = 0; i < static_cast<int>(matriz.size()); i++) {
        for (int j = 0; j < static_cast<int>(matriz[i].size()); j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

static void exemploMatrizBasica() {
    cout << "\n--- matriz basica ---" << endl;

    int linhas = 3;
    int colunas = 4;

    vector<vector<int>> A(linhas, vector<int>(colunas));

    int valor = 1;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            A[i][j] = valor;
            valor++;
        }
    }

    cout << "Matriz A:" << endl;
    imprimirMatriz(A);
}

static void exemploSomaLinhasColunas() {
    cout << "\n--- soma de linhas e colunas ---" << endl;

    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int linhas = static_cast<int>(A.size());
    int colunas = static_cast<int>(A[0].size());

    cout << "Matriz:" << endl;
    imprimirMatriz(A);

    // Soma das linhas.
    for (int i = 0; i < linhas; i++) {
        int somaLinha = 0;

        for (int j = 0; j < colunas; j++) {
            somaLinha += A[i][j];
        }

        cout << "Soma da linha " << i << ": " << somaLinha << endl;
    }

    // Soma das colunas.
    for (int j = 0; j < colunas; j++) {
        int somaColuna = 0;

        for (int i = 0; i < linhas; i++) {
            somaColuna += A[i][j];
        }

        cout << "Soma da coluna " << j << ": " << somaColuna << endl;
    }
}

static void exemploMultiplicacaoMatrizVetor() {
    cout << "\n--- multiplicacao matriz x vetor ---" << endl;

    /*
        Mesmo problema do Aizu ITP1_6_D.

        A = matriz n x m
        b = vetor com m elementos
        resultado = vetor com n elementos

        resultado[i] = soma de A[i][j] * b[j]
    */

    vector<vector<int>> A = {
        {1, 2, 0, 1},
        {0, 3, 0, 1},
        {4, 1, 1, 0}
    };

    vector<int> b = {1, 2, 3, 0};

    int n = static_cast<int>(A.size());
    int m = static_cast<int>(b.size());

    cout << "Resultado A * b:" << endl;

    for (int i = 0; i < n; i++) {
        int soma = 0;

        for (int j = 0; j < m; j++) {
            soma += A[i][j] * b[j];
        }

        cout << soma << endl;
    }
}

void exemplosMatriz() {
    cout << "\n===============================" << endl;
    cout << "2) MATRIZES" << endl;
    cout << "===============================" << endl;

    exemploMatrizBasica();
    exemploSomaLinhasColunas();
    exemploMultiplicacaoMatrizVetor();
}
