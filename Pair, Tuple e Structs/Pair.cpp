/*
 * Pair.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */
 
//Um pair guarda exatamente dois valores.


#include <iostream>
#include <utility>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;

int main(){
	pair <string, int> pessoa;
	pessoa.first = "Joseph";
	pessoa.second = 24;
	
	cout << pessoa.first << endl;
	cout << pessoa.second << endl;
	
	return 0;
}

