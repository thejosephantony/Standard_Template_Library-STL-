#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <string>

#include "stack_queue_examples.h"

using std::cout;
using std::endl;
using std::stack;
using std::queue;
using std::deque;
using std::string;

/*
    STACK, QUEUE E DEQUE

    stack:
        pilha
        LIFO = Last In, First Out
        O último que entra é o primeiro que sai.

        Operações:
            push
            pop
            top
            empty
            size

    queue:
        fila
        FIFO = First In, First Out
        O primeiro que entra é o primeiro que sai.

        Operações:
            push
            pop
            front
            back
            empty
            size

    deque:
        fila de duas pontas
        Pode inserir/remover no começo e no fim.

        Operações:
            push_back
            push_front
            pop_back
            pop_front
            front
            back
*/

static void exemploStack() {
    cout << "\n--- stack / pilha ---" << endl;

    stack<int> pilha;

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    cout << "Topo da pilha: " << pilha.top() << endl;

    while (!pilha.empty()) {
        cout << "Removendo: " << pilha.top() << endl;
        pilha.pop();
    }
}

static void exemploQueue() {
    cout << "\n--- queue / fila ---" << endl;

    queue<string> fila;

    fila.push("Ana");
    fila.push("Bruno");
    fila.push("Carlos");

    cout << "Primeiro da fila: " << fila.front() << endl;
    cout << "Ultimo da fila: " << fila.back() << endl;

    while (!fila.empty()) {
        cout << "Atendendo: " << fila.front() << endl;
        fila.pop();
    }
}

static void exemploDeque() {
    cout << "\n--- deque / fila de duas pontas ---" << endl;

    deque<int> d;

    d.push_back(10);
    d.push_back(20);
    d.push_front(5);
    d.push_front(1);

    cout << "Deque atual: ";
    for (int x : d) {
        cout << x << " ";
    }
    cout << endl;

    d.pop_front();
    d.pop_back();

    cout << "Depois de remover frente e fim: ";
    for (int x : d) {
        cout << x << " ";
    }
    cout << endl;
}

static void exemploBalanceamentoParenteses() {
    cout << "\n--- exemplo classico: parenteses balanceados ---" << endl;

    /*
        Problema comum:
            Verificar se uma expressão tem parênteses balanceados.

        Exemplo:
            "(()())" -> balanceado
            "(()"    -> não balanceado

        Usamos stack porque o último '(' aberto deve ser fechado primeiro.
    */

    string s = "(()())";

    stack<char> pilha;
    bool ok = true;

    for (char c : s) {
        if (c == '(') {
            pilha.push(c);
        } else if (c == ')') {
            if (pilha.empty()) {
                ok = false;
                break;
            }

            pilha.pop();
        }
    }

    if (!pilha.empty()) {
        ok = false;
    }

    cout << "Expressao: " << s << endl;

    if (ok) {
        cout << "Balanceada" << endl;
    } else {
        cout << "Nao balanceada" << endl;
    }
}

void exemplosStackQueueDeque() {
    cout << "\n===============================" << endl;
    cout << "4) STACK, QUEUE E DEQUE" << endl;
    cout << "===============================" << endl;

    exemploStack();
    exemploQueue();
    exemploDeque();
    exemploBalanceamentoParenteses();
}
