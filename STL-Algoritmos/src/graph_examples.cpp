#include <iostream>
#include <vector>
#include <queue>

#include "graph_examples.h"

using std::cout;
using std::endl;
using std::vector;
using std::queue;

/*
    GRAFOS COM LISTA DE ADJACÊNCIA

    Em problemas de grafos, uma estrutura muito comum é:

        vector<vector<int>> grafo(n);

    Significa:
        grafo[u] guarda todos os vizinhos do vértice u.

    Exemplo:
        grafo[0] = {1, 2}

    O vértice 0 tem arestas para 1 e 2.
*/

static void exemploListaAdjacencia() {
    cout << "\n--- lista de adjacencia ---" << endl;

    int n = 5;

    vector<vector<int>> grafo(n);

    // Grafo não direcionado.
    auto adicionarAresta = [&](int u, int v) {
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    };

    adicionarAresta(0, 1);
    adicionarAresta(0, 2);
    adicionarAresta(1, 3);
    adicionarAresta(2, 4);

    for (int u = 0; u < n; u++) {
        cout << "Vizinhos de " << u << ": ";

        for (int v : grafo[u]) {
            cout << v << " ";
        }

        cout << endl;
    }
}

static void exemploBFS() {
    cout << "\n--- BFS / busca em largura ---" << endl;

    /*
        BFS:
            Explora o grafo em camadas.
            Usa queue.

        Usos:
            - menor caminho em grafo sem peso
            - verificar conectividade
            - percorrer níveis
    */

    int n = 6;

    vector<vector<int>> grafo(n);

    auto adicionarAresta = [&](int u, int v) {
        grafo[u].push_back(v);
        grafo[v].push_back(u);
    };

    adicionarAresta(0, 1);
    adicionarAresta(0, 2);
    adicionarAresta(1, 3);
    adicionarAresta(2, 4);
    adicionarAresta(4, 5);

    vector<bool> visitado(n, false);
    vector<int> distancia(n, -1);

    int origem = 0;

    queue<int> fila;

    visitado[origem] = true;
    distancia[origem] = 0;
    fila.push(origem);

    while (!fila.empty()) {
        int u = fila.front();
        fila.pop();

        for (int v : grafo[u]) {
            if (!visitado[v]) {
                visitado[v] = true;
                distancia[v] = distancia[u] + 1;
                fila.push(v);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "Distancia de " << origem << " ate " << i << ": " << distancia[i] << endl;
    }
}

static void dfsRecursiva(int u, const vector<vector<int>>& grafo, vector<bool>& visitado) {
    visitado[u] = true;

    cout << "Visitando: " << u << endl;

    for (int v : grafo[u]) {
        if (!visitado[v]) {
            dfsRecursiva(v, grafo, visitado);
        }
    }
}

static void exemploDFS() {
    cout << "\n--- DFS / busca em profundidade ---" << endl;

    /*
        DFS:
            Vai o mais fundo possível antes de voltar.
            Pode ser feita com recursão ou stack.

        Usos:
            - componentes conexos
            - detectar ciclos
            - percorrer grafos
            - backtracking
    */

    int n = 5;

    vector<vector<int>> grafo(n);

    grafo[0].push_back(1);
    grafo[1].push_back(0);

    grafo[0].push_back(2);
    grafo[2].push_back(0);

    grafo[1].push_back(3);
    grafo[3].push_back(1);

    grafo[2].push_back(4);
    grafo[4].push_back(2);

    vector<bool> visitado(n, false);

    dfsRecursiva(0, grafo, visitado);
}

void exemplosGrafos() {
    cout << "\n===============================" << endl;
    cout << "7) GRAFOS" << endl;
    cout << "===============================" << endl;

    exemploListaAdjacencia();
    exemploBFS();
    exemploDFS();
}
