#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

#include "set_map_examples.h"

using std::cout;
using std::endl;
using std::set;
using std::multiset;
using std::map;
using std::unordered_map;
using std::string;
using std::vector;

/*
    SET, MULTISET, MAP E UNORDERED_MAP

    set:
        guarda elementos únicos e ordenados.

    multiset:
        guarda elementos ordenados, permitindo repetição.

    map:
        chave -> valor
        chaves únicas e ordenadas.

    unordered_map:
        chave -> valor
        não mantém ordem, mas costuma ser mais rápido na média.

    Exemplos comuns:
        - remover duplicatas
        - contar frequência
        - verificar existência
        - ranking
        - dicionário
*/

static void exemploSet() {
    cout << "\n--- set ---" << endl;

    set<int> s;

    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(9);
    s.insert(1);

    /*
        O set remove duplicatas automaticamente
        e mantém os elementos ordenados.
    */

    cout << "Elementos do set: ";

    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    int valor = 5;

    if (s.find(valor) != s.end()) {
        cout << valor << " existe no set" << endl;
    } else {
        cout << valor << " nao existe no set" << endl;
    }
}

static void exemploMultiset() {
    cout << "\n--- multiset ---" << endl;

    multiset<int> ms;

    ms.insert(5);
    ms.insert(2);
    ms.insert(5);
    ms.insert(5);
    ms.insert(1);

    cout << "Elementos do multiset: ";

    for (int x : ms) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Quantidade de 5: " << ms.count(5) << endl;

    /*
        Atenção:
            ms.erase(5) remove todos os 5.
            Para remover só um 5:
                auto it = ms.find(5);
                if (it != ms.end()) ms.erase(it);
    */

    auto it = ms.find(5);

    if (it != ms.end()) {
        ms.erase(it);
    }

    cout << "Depois de remover apenas um 5: ";

    for (int x : ms) {
        cout << x << " ";
    }
    cout << endl;
}

static void exemploMapFrequencia() {
    cout << "\n--- map para contar frequencia ---" << endl;

    vector<string> palavras = {
        "casa",
        "uva",
        "casa",
        "banana",
        "uva",
        "casa"
    };

    map<string, int> freq;

    for (string palavra : palavras) {
        freq[palavra]++;
    }

    cout << "Frequencia das palavras:" << endl;

    for (auto par : freq) {
        cout << par.first << " -> " << par.second << endl;
    }
}

static void exemploUnorderedMap() {
    cout << "\n--- unordered_map ---" << endl;

    /*
        unordered_map é muito usado quando você só quer velocidade
        e não precisa dos dados em ordem.

        Exemplo:
            contar caracteres de uma string.
    */

    string texto = "banana";

    unordered_map<char, int> freq;

    for (char c : texto) {
        freq[c]++;
    }

    cout << "Frequencia em banana:" << endl;

    for (auto par : freq) {
        cout << par.first << " -> " << par.second << endl;
    }
}

static void exemploRemoverDuplicatasComSet() {
    cout << "\n--- remover duplicatas com set ---" << endl;

    vector<int> v = {4, 2, 4, 1, 2, 9, 9, 3};

    set<int> unicos(v.begin(), v.end());

    cout << "Valores unicos ordenados: ";

    for (int x : unicos) {
        cout << x << " ";
    }
    cout << endl;
}

void exemplosSetMap() {
    cout << "\n===============================" << endl;
    cout << "5) SET, MULTISET, MAP E UNORDERED_MAP" << endl;
    cout << "===============================" << endl;

    exemploSet();
    exemploMultiset();
    exemploMapFrequencia();
    exemploUnorderedMap();
    exemploRemoverDuplicatasComSet();
}
