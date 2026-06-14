/*
 * Contar caractere.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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

    for (int i = 0; i < palavra.size(); i++) {
        if (c == palavra[i]) {
            cont++;
        }
    }

    cout << "O caractere '" << c << "' aparece " << cont << " vez(es)." << endl;

    return 0;
}

