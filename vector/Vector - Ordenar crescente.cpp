#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int N;

    cout << "Insira o tamanho do vector: ";
    cin >> N;

    vector<int> numeros(N);

    for(int i = 0; i < N; i++){
        cin >> numeros[i];
    }
    sort(numeros.begin(), numeros.end());

    for(int i = 0; i < N; i++){
        cout << numeros[i] << " ";
    }
    return 0;
}
