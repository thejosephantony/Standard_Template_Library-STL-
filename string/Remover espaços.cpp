/*
 * Remover espaços.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */


#include <iostream>
#include <algorithm>
#include <string>
#include <locale>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
	setlocale(LC_ALL, "Portuguese");
	string frase;
	
	cout << "Insira a frase: ";
	getline(cin, frase);
	
	frase.erase(remove(frase.begin(), frase.end(), ' '), frase.end());
	
	cout << "A frase sem espaços: " << frase << endl;
	
	return 0;
}

