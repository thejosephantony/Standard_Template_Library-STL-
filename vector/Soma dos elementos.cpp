/*
 * Soma dos elementos.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main(){
	int N;
	int somaElem;
	
	cout << "Insira no número de elementos: ";
	cin >> N;
	
	vector<int> elementos(N);
	
	cout << "Insira os valores: ";
	for(int i = 0; i < N; i++){
		cin >> elementos[i];
	}
	
	somaElem = accumulate(elementos.begin(), elementos.end(), 0);
	
	cout << "Soma = " << somaElem << endl;
	
	return 0;
}

