#include <iostream>
#include <vector>

#include "dsu_examples.h"

using std::cout;
using std::endl;
using std::vector;

/*
    DSU / UNION-FIND

    DSU significa Disjoint Set Union.
    Também é chamado de Union-Find.

    Serve para manter grupos/conjuntos disjuntos.

    Operações principais:
        find(x):
            descobre o representante do grupo de x.

        unite(a, b):
            junta o grupo de a com o grupo de b.

        same(a, b):
            verifica se a e b estão no mesmo grupo.

    Muito usado em:
        - conectividade
        - grafos
        - Kruskal
        - agrupamento
*/

class DSU {
private:
    vector<int> parent;
    vector<int> tamanho;

public:
    DSU(int n) {
        parent.resize(n);
        tamanho.assign(n, 1);

        // No começo, cada elemento é pai de si mesmo.
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        /*
            Compressão de caminho:
                Faz o nó apontar diretamente para a raiz.
                Isso acelera consultas futuras.
        */

        if (parent[x] == x) {
            return x;
        }

        parent[x] = find(parent[x]);

        return parent[x];
    }

    bool same(int a, int b) {
        return find(a) == find(b);
    }

    void unite(int a, int b) {
        int raizA = find(a);
        int raizB = find(b);

        if (raizA == raizB) {
            return;
        }

        /*
            União por tamanho:
                O grupo menor entra no grupo maior.
        */

        if (tamanho[raizA] < tamanho[raizB]) {
            std::swap(raizA, raizB);
        }

        parent[raizB] = raizA;
        tamanho[raizA] += tamanho[raizB];
    }

    int size(int x) {
        int raiz = find(x);
        return tamanho[raiz];
    }
};

void exemplosDSU() {
    cout << "\n===============================" << endl;
    cout << "8) DSU / UNION-FIND" << endl;
    cout << "===============================" << endl;

    DSU dsu(6);

    dsu.unite(0, 1);
    dsu.unite(1, 2);
    dsu.unite(3, 4);

    cout << "0 e 2 estao no mesmo grupo? ";

    if (dsu.same(0, 2)) {
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl;
    }

    cout << "0 e 4 estao no mesmo grupo? ";

    if (dsu.same(0, 4)) {
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl;
    }

    cout << "Tamanho do grupo de 0: " << dsu.size(0) << endl;
    cout << "Tamanho do grupo de 3: " << dsu.size(3) << endl;
}
