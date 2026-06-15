/*
 * vector_demo.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

 * 
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>   // para accumulate

using std::cout;
using std::endl;
using std::vector;

void demonstrarVector() {
    cout << "\n========== VECTOR ==========\n";

    // 1. Construtores
    vector<int> v1;                     // vazio
    vector<int> v2(5, 10);              // 5 elementos com valor 10
    vector<int> v3 = {1, 2, 3, 4, 5};   // inicialização com lista
    vector<int> v4(v3);                 // cópia

    // 2. Atribuição
    v1 = v3;

    // 3. Iteradores
    cout << "Elementos de v3: ";
    for (auto it = v3.begin(); it != v3.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // 4. push_back / pop_back
    v1.push_back(6);
    v1.pop_back();

    // 5. Inserção em posição
    v1.insert(v1.begin(), 0);           // insere 0 no início
    v1.insert(v1.end(), {7, 8});        // insere múltiplos no fim

    // 6. Remoção
    v1.erase(v1.begin());               // remove primeiro
    v1.erase(v1.begin() + 1, v1.begin() + 3); // remove intervalo

    // 7. Acesso
    cout << "Primeiro: " << v1.front() << ", último: " << v1.back() << endl;
    cout << "Elemento no índice 2: " << v1[2] << " (at: " << v1.at(2) << ")" << endl;

    // 8. Tamanho e capacidade
    cout << "Tamanho: " << v1.size() << ", Capacidade: " << v1.capacity() << endl;
    v1.reserve(20);                     // reserva espaço
    cout << "Nova capacidade: " << v1.capacity() << endl;
    v1.shrink_to_fit();                 // reduz capacidade para caber o tamanho
    cout << "Após shrink_to_fit: " << v1.capacity() << endl;

    // 9. Redimensionar
    v1.resize(3);                       // trunca ou adiciona zeros
    v1.resize(5, 100);                  // adiciona 100 nos novos elementos

    // 10. Swap (troca eficiente)
    vector<int> v5 = {100, 200};
    v1.swap(v5);
    cout << "Após swap, v1: ";
    for (int x : v1) cout << x << " ";
    cout << endl;

    // 11. Limpar
    v1.clear();
    cout << "Está vazio? " << (v1.empty() ? "Sim" : "Não") << endl;

    // 12. Algoritmos com vector
    v3 = {5, 2, 8, 1, 9, 2, 4};
    std::sort(v3.begin(), v3.end());                 // ordena
    cout << "Ordenado: ";
    for (int x : v3) cout << x << " ";
    cout << endl;

    auto it = std::find(v3.begin(), v3.end(), 8);
    if (it != v3.end())
        cout << "Elemento 8 encontrado na posição " << (it - v3.begin()) << endl;

    int cont = std::count(v3.begin(), v3.end(), 2);
    cout << "Quantidade de 2: " << cont << endl;

    std::reverse(v3.begin(), v3.end());              // inverte
    cout << "Invertido: ";
    for (int x : v3) cout << x << " ";
    cout << endl;

    int soma = std::accumulate(v3.begin(), v3.end(), 0);
    cout << "Soma total: " << soma << endl;

    // Transformar (dobrar valores)
    std::transform(v3.begin(), v3.end(), v3.begin(),
                   [](int x) { return x * 2; });
    cout << "Dobrado: ";
    for (int x : v3) cout << x << " ";
    cout << endl;
}
