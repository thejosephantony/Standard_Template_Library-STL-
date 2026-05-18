#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n;

    cout << "Qual será o tamanho do vector? " << endl;
    cin >> n;

    vector<int> numeros(n);

    for(int i = 0; i < n; i++){
        cin >> numeros[i];
    }

    for(int i = 0; i < n; i++){
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;

}
