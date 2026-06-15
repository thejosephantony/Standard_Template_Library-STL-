/*
 * vector_examples.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <vector>
#include <algorithm>

#include "vector_examples.h"

using std::cout;
using std::endl;
using std::vector;

void imprimirVector(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

void exemplosVector() {
    // Criando um vector vazio
    vector<int> v;

    // push_back: adiciona elementos no final
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector inicial: ";
    imprimirVector(v);

    // size: quantidade de elementos
    cout << "Tamanho: " << v.size() << endl;

    // empty: verifica se está vazio
    if (v.empty()) {
        cout << "Vector vazio" << endl;
    } else {
        cout << "Vector nao vazio" << endl;
    }

    // Acesso por índice
    cout << "Primeiro elemento: " << v[0] << endl;

    // at: acesso com verificação de limite
    cout << "Elemento na posicao 1: " << v.at(1) << endl;

    // front: primeiro elemento
    cout << "Front: " << v.front() << endl;

    // back: último elemento
    cout << "Back: " << v.back() << endl;

    // Alterando valor
    v[1] = 99;

    cout << "Depois de alterar v[1]: ";
    imprimirVector(v);

    // pop_back: remove o último elemento
    v.pop_back();

    cout << "Depois do pop_back: ";
    imprimirVector(v);

    // insert: inserir em uma posição
    v.insert(v.begin() + 1, 50);

    cout << "Depois do insert: ";
    imprimirVector(v);

    // erase: remover elemento de uma posição
    v.erase(v.begin());

    cout << "Depois do erase: ";
    imprimirVector(v);

    // clear: remove todos os elementos
    vector<int> temp = {1, 2, 3};
    temp.clear();

    cout << "Tamanho de temp depois do clear: " << temp.size() << endl;

    // Inicialização direta
    vector<int> numeros = {5, 2, 8, 1, 9, 3};

    cout << "Numeros: ";
    imprimirVector(numeros);

    // sort: ordenar
    sort(numeros.begin(), numeros.end());

    cout << "Ordenado crescente: ";
    imprimirVector(numeros);

    // sort decrescente
    sort(numeros.begin(), numeros.end(), std::greater<int>());

    cout << "Ordenado decrescente: ";
    imprimirVector(numeros);

    // reverse: inverter ordem
    reverse(numeros.begin(), numeros.end());

    cout << "Depois do reverse: ";
    imprimirVector(numeros);

    // find: procurar elemento
    auto it = find(numeros.begin(), numeros.end(), 8);

    if (it != numeros.end()) {
        cout << "Elemento 8 encontrado" << endl;
    } else {
        cout << "Elemento 8 nao encontrado" << endl;
    }

    // count: contar ocorrências
    vector<int> repetidos = {1, 2, 2, 3, 2, 4};

    int qtd = count(repetidos.begin(), repetidos.end(), 2);

    cout << "Quantidade de vezes que 2 aparece: " << qtd << endl;

    // max_element: maior elemento
    auto maior = max_element(repetidos.begin(), repetidos.end());

    cout << "Maior elemento: " << *maior << endl;

    // min_element: menor elemento
    auto menor = min_element(repetidos.begin(), repetidos.end());

    cout << "Menor elemento: " << *menor << endl;

    // erase-remove: remover todas as ocorrências de um valor
    repetidos.erase(
        remove(repetidos.begin(), repetidos.end(), 2),
        repetidos.end()
    );

    cout << "Depois de remover todos os 2: ";
    imprimirVector(repetidos);

    // unique: remove duplicatas consecutivas
    vector<int> duplicados = {1, 1, 2, 2, 3, 3, 3, 4};

    duplicados.erase(
        unique(duplicados.begin(), duplicados.end()),
        duplicados.end()
    );

    cout << "Depois do unique: ";
    imprimirVector(duplicados);

    // Percorrendo com índice
    cout << "Percorrendo com indice: ";
    for (int i = 0; i < static_cast<int>(duplicados.size()); i++) {
        cout << duplicados[i] << " ";
    }
    cout << endl;

    // Percorrendo com range-based for
    cout << "Percorrendo com range-based for: ";
    for (int x : duplicados) {
        cout << x << " ";
    }
    cout << endl;
}
