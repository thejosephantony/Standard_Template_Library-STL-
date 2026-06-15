#include <iostream>

#include "vector_string_examples.h"
#include "matrix_examples.h"
#include "algorithm_examples.h"
#include "stack_queue_examples.h"
#include "set_map_examples.h"
#include "priority_queue_examples.h"
#include "graph_examples.h"
#include "dsu_examples.h"

using std::cout;
using std::endl;

/*
    Este main.cpp chama todos os módulos do projeto.

    Ideia:
    - Cada arquivo .cpp ensina uma parte da STL.
    - Cada função mostra exemplos práticos.
    - Você pode comentar/descomentar chamadas para estudar por partes.

    Para problemas de juiz online, normalmente você colocaria tudo em um único arquivo.
    Mas aqui está separado para estudar melhor.
*/

int main() {
    cout << "===============================" << endl;
    cout << " ESTUDO DE STL E ESTRUTURAS" << endl;
    cout << "===============================" << endl << endl;

    exemplosVectorString();
    exemplosMatriz();
    exemplosAlgoritmos();
    exemplosStackQueueDeque();
    exemplosSetMap();
    exemplosPriorityQueue();
    exemplosGrafos();
    exemplosDSU();

    return 0;
}
