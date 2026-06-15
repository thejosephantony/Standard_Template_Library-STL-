/*
 * string_demo.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>   // para tolower

using std::cout;
using std::endl;
using std::string;

void demonstrarString() {
    cout << "\n========== STRING ==========\n";

    // 1. Construtores
    string s1;                         // vazia
    string s2(5, 'a');                 // "aaaaa"
    string s3 = "Hello World";
    string s4(s3, 6, 5);               // "World" (posição 6, 5 caracteres)

    // 2. Atribuição
    s1 = s3;

    // 3. Acesso a caracteres
    cout << "Primeiro: " << s3[0] << ", último: " << s3.back() << endl;
    s3.front() = 'h';                  // modifica primeiro caractere

    // 4. Concatenação
    string frase = s3 + " " + s4;      // "hello World World"
    frase += "!";

    // 5. Tamanho
    cout << "Tamanho: " << frase.size() << " (length: " << frase.length() << ")" << endl;

    // 6. Inserir / apagar
    frase.insert(5, " beautiful");
    frase.erase(12, 5);                // remove 5 caracteres a partir do índice 12

    // 7. Substituir
    frase.replace(0, 5, "Hi");         // substitui "hello" por "Hi"

    // 8. Busca
    size_t pos = frase.find("World");
    if (pos != string::npos)
        cout << "'World' encontrado na posição " << pos << endl;

    // 9. Substring
    string sub = frase.substr(6, 7);   // a partir do índice 6, 7 caracteres

    // 10. Comparação
    if (s3 == s1) cout << "s3 e s1 são iguais" << endl;
    int cmp = s3.compare(s4);          // negativo se s3 < s4, zero, positivo

    // 11. Conversão C‑string
    const char* cstr = frase.c_str();
    cout << "Como C-string: " << cstr << endl;

    // 12. Ler linha completa
    string linha;
    cout << "Digite uma linha: ";
    std::getline(std::cin, linha);
    cout << "Você digitou: " << linha << endl;

    // 13. Algoritmos com string
    string palavra = "Radar";
    std::transform(palavra.begin(), palavra.end(), palavra.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    cout << "Minúsculas: " << palavra << endl;

    std::reverse(palavra.begin(), palavra.end());
    cout << "Invertida: " << palavra << endl;

    // 14. Remover espaços (exemplo)
    string txt = "   abc   def   ";
    txt.erase(0, txt.find_first_not_of(" \t"));
    txt.erase(txt.find_last_not_of(" \t") + 1);
    cout << "Sem espaços extra: '" << txt << "'" << endl;
}
