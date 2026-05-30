#include <iostream>
#include <algorithm>
#include <vector>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::reverse;
using std::vector;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int N;

    cout << "Insira o tamanho do vector: ";
    cin >> N;

    vector<int> numeros(N);

    cout << "Insira os valores do vector de " << "tamanho " << N << endl;
    for(int i = 0; i < N; i++){
        cin >> numeros[i];
    }

    reverse(numeros.begin(), numeros.end());
    for(int x : numeros){
        cout << x << " ";
    }
    return 0;
}
