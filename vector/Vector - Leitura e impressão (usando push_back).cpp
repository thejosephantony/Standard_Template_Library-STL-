#include <iostream>
#include <vector>
#include <clocale>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;
    int valor;
    vector<int> numeros;

    cout << "Qual será o tamanho do vector? " << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> valor;
        numeros.push_back(valor);
    }

    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    return 0;
}
