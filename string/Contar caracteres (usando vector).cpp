/*
 * Contar caracteres (usando vector).cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
    string palavra;
    char c;
    int cont = 0;

    cout << "Insira uma palavra: ";
    getline(cin, palavra);

    cout << "Digite o caractere: ";
    cin >> c;

    vector<char> caracteres(palavra.begin(), palavra.end());

    for (int i = 0; i < caracteres.size(); i++) {
        if (c == caracteres[i]) {
            cont++;
        }
    }

    cout << "O caractere '" << c << "' aparece " << cont << " vez(es)." << endl;

    return 0;
}
