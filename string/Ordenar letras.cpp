/*
 * Ordenar letras.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <algorithm>
#include <string>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	setlocale(LC_ALL, "Portuguese");
	string palavra;
	string ordenarLetras;
	
	cout << "Insira uma palavra: ";
	getline(cin, palavra);
	
	ordenarLetras = palavra;
	sort(ordenarLetras.begin(), ordenarLetras.end());
	
	cout << "A palavra '" << palavra << "' em ordem alfabética é: " << ordenarLetras << endl;
	 
	return 0;
}

