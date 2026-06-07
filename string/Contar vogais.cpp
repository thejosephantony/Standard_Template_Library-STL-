/*
 * Contar vogais.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <locale>
#include <vector>
#include <string>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int main(){
	setlocale(LC_ALL, "Portuguese");
	string palavra;
	int count = 0;
	
	cout << "Insira uma palavra: ";
	getline(cin, palavra);
	
	vector<char> caracteres(palavra.begin(), palavra.end());
	
	for(char c : caracteres){
		if(c == 'a' || c == 'A' ||
		   c == 'e' || c == 'E' ||
		   c == 'i' || c == 'I' ||
		   c == 'o' || c == 'O' ||
		   c == 'u' || c == 'U'){
			count++;
		}
	}
	
	if(count > 1){
		cout << "A palavra " << palavra << " possui " << count << " vogais." << endl;
	}
	else if(count == 1){
		cout << "A palavra " << palavra << " possui " << count << " vogal." << endl;
		}
	else{
		cout << "A palavra " << palavra << " não possui vogais." << endl;
		}
		
	return 0;
}
