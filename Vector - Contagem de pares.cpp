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
    int cont = 0;

    cout << "Insira o tamanho do vector: ";
    cin >> N;

    vector<int> numeros(N);

    cout << "Insira " << N << " números: ";
    for(int i = 0; i < N; i++){
        cin >> numeros[i];
    }
    for(int j = 0; j < N; j++){
        if(numeros[j] % 2 == 0){
            cont++;
        }
    }
    cout << "Há " << cont << " números pares." << endl;
    return 0;
}
