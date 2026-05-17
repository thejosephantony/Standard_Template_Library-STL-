#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    vector<int> numeros;

    numeros.push_back(1);
    numeros.push_back(2);
    numeros.push_back(3);

    for(int x : numeros){
        cout << x << endl;
    }
    return 0;

}

/* A biblioteca vector é um array dinâmico, usado para representar:
- listas
- arrays dinâmicos
- matrizes
- grafos
- sequências numéricas
- tabelas
- vetores auxiliares

v.push_back(x);   // adiciona no final
v.pop_back();     // remove o último
v.size();         // tamanho
v.empty();        // verifica se está vazio
v.front();        // primeiro elemento
v.back();         // último elemento
v.clear();        // limpa o vetor
v[i];             // acessa posição i
v.at(i);          // acessa posição i com verificação
*/

