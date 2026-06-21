/*
 * Frequência simples de letras.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
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
    cout << "Insira a palavra (apenas letras minúsculas): ";
    cin >> palavra;   

    vector<int> freq(26, 0);


    for (char c : palavra) {

        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            char letra = static_cast<char>('a' + i);
            cout << letra << ": " << freq[i] << endl;
        }
    }

    return 0;
}
