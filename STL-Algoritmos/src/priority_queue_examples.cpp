#include <iostream>
#include <queue>
#include <vector>
#include <functional>

#include "priority_queue_examples.h"

using std::cout;
using std::endl;
using std::priority_queue;
using std::vector;

/*
    PRIORITY_QUEUE

    priority_queue:
        fila de prioridade.

    Por padrão, o maior elemento tem prioridade.
    Ou seja, é uma max-heap.

    Muito usada em:
        - pegar sempre o maior/menor valor
        - simulações
        - algoritmo de Dijkstra
        - problemas de agendamento
*/

static void exemploMaxHeap() {
    cout << "\n--- priority_queue como max-heap ---" << endl;

    priority_queue<int> pq;

    pq.push(10);
    pq.push(5);
    pq.push(30);
    pq.push(20);

    cout << "Removendo em ordem de prioridade: ";

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;
}

static void exemploMinHeap() {
    cout << "\n--- priority_queue como min-heap ---" << endl;

    /*
        Para menor valor ter prioridade:
            priority_queue<int, vector<int>, greater<int>>
    */

    priority_queue<int, vector<int>, std::greater<int>> pq;

    pq.push(10);
    pq.push(5);
    pq.push(30);
    pq.push(20);

    cout << "Removendo em ordem crescente: ";

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << endl;
}

static void exemploTarefasPrioridade() {
    cout << "\n--- exemplo com pares ---" << endl;

    /*
        pair<int, string>:
            first  -> prioridade
            second -> nome da tarefa

        A priority_queue vai ordenar pelo first primeiro.
    */

    priority_queue<std::pair<int, std::string>> tarefas;

    tarefas.push({2, "estudar string"});
    tarefas.push({5, "resolver problema urgente"});
    tarefas.push({1, "organizar arquivos"});
    tarefas.push({3, "estudar vector"});

    while (!tarefas.empty()) {
        auto atual = tarefas.top();
        tarefas.pop();

        cout << "Prioridade " << atual.first << ": " << atual.second << endl;
    }
}

void exemplosPriorityQueue() {
    cout << "\n===============================" << endl;
    cout << "6) PRIORITY_QUEUE" << endl;
    cout << "===============================" << endl;

    exemploMaxHeap();
    exemploMinHeap();
    exemploTarefasPrioridade();
}
