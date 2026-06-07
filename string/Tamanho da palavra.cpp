/*
 * Tamanho da palavra.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */
#include <iostream>
#include <locale>
#include <string>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    setlocale(LC_ALL, "Portuguese");

    string palavra;
    int op;

    cout << "\n==== IMPRIMIR O TAMANHO DE PALAVRAS =====\n" << endl;

    while(true){
        cout << "\nEscolha uma opção\n1- Inserir palavra\n2- Sair\n";
        cin >> op;

        if(op == 2){
            break;
        }

        switch(op){
            case 1:
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                
                cout << "Insira a palavra: ";
                getline(cin, palavra);

                cout << "O tamanho de \"" << palavra 
                     << "\" é " << palavra.size() << endl;
                break;

            default:
                cout << "Opção inválida" << endl;
        }
    }

    return 0;
}
