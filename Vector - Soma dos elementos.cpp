#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int N;
    int soma = 0;

    cout << "Insira o tamanho do vector: ";
    cin >> N;

    vector<int> elementos(N);

    for(int i = 0; i < N; i++){
        cin >> elementos[i];
    }
    for(int i = 0; i < N; i++){
        soma = soma + elementos[i];
    }

    cout << "A soma é " << soma << endl;
    return 0;
}
