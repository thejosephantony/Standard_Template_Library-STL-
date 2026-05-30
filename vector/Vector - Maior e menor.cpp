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
    int maior;
    int menor;
    int aux;

    cout << "Qual o tamanho do vector? ";
    cin >> N;

    vector<int> numeros(N);

    for(int i = 0; i < N; i++){
        cin >> numeros[i];
    }

    maior = numeros[0];
    menor = numeros[0];

    for(int j = 1; j < N; j++){
        if(numeros[j] > maior){
            aux = maior;
            maior = numeros[j];
            menor = aux;
        }
        else if(numeros[j] < maior){
            menor = numeros[j];
        }
    }
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    return 0;

}
