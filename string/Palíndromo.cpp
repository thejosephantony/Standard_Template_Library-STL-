/*
 * Palíndromo.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <algorithm>
#include <locale>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){
	setlocale(LC_ALL, "Portuguese");
	string palavra;
	string palavraMiniscula;
	string reversa;
	
	cout << "Insira uma palavra: ";
	getline(cin, palavra);
	
	palavraMiniscula = palavra;
	for(char &c : palavraMiniscula){
		c = std::tolower(static_cast<unsigned char>(c));
	}
	
	reversa = palavraMiniscula;
	reverse(reversa.begin(), reversa.end());
	
	
	if (palavra == reversa){
		cout << "É palíndromo." << endl;
	}
	else{
		cout << "Não é palíndromo." << endl;
	}
	
	return 0;
}

