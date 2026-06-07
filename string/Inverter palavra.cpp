/*
 * Inverter palavra.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 */


#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string palavra;
	
	cout << "Insira uma palavra: ";
	getline(cin, palavra);
	reverse(palavra.begin(), palavra.end());
	
	
	cout << "O inverso da palavra: " << palavra << endl;
	 
	return 0;
}

