/*
 * Anagramas.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */


#include <iostream>
#include <string>
#include <locale>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){
	setlocale(LC_ALL, "Portuguese");
	string palavra1;
	string palavra2;
	
	cout << "Insira a primeira palavra: ";
	getline(cin, palavra1);
	
	cout << "Insira a segunda palavra: ";
	getline(cin, palavra2);
	
	std::transform(palavra1.begin(), palavra1.end(), palavra1.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    std::transform(palavra2.begin(), palavra2.end(), palavra2.begin(),
                   [](unsigned char c) { return std::tolower(c); });
                   
                   
	sort(palavra1.begin(), palavra1.end());
	sort(palavra2.begin(), palavra2.end());
	
	if(palavra2 == palavra1){
		cout << "SIM. São anagramas." << endl;
	}
	else{
		cout << "NÃO. Não são anagramas." << endl;
	}
	
	return 0;
}

