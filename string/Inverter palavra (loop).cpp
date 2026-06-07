/*
 * Inverter palavra (loop).cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 
 * 
 */
#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string palavra;
	
	cout << "Insira uma palavra: ";
	getline(cin, palavra);
	
	for(int i = palavra.size() - 1; i >= 0; i--){
		cout << palavra[i];
	
	}
	cout << endl;
	return 0;
}

