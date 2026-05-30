#include <iostream>
#include <locale>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::greater;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int N;

    cout << "Insira o tamanho do vector: ";
    cin >> N;

    vector<int> numeros(N);

    cout << "Insira agora os valores do vector de tamanho " << N << ": ";
    for(int i = 0; i < N; i++){
        cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end(), greater<int>());

    cout << "Em ordem decrescente: ";
    for(int i = 0; i < N; i++){
        cout << numeros[i] << " ";
    }

    return 0;

}
