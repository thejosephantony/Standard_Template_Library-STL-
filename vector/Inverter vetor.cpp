/*
 * Inverter vetor.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>

 */


#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
	int N;
	
	cout << "Qual o tamanho do vector? ";
	cin >> N;
	
	vector<int> numeros(N);
	
	cout << "Insira os valores do vector de " << N << " tamanho: ";
	for(int i = 0; i < N; i++){
		cin >> numeros[i];
	}
	
	for (int i = 0, j = N - 1; i < j; i++, j--) {
		int temp = numeros[i];
		numeros[i] = numeros[j];
		numeros[j] = temp;
	}
	
	cout << "O vector invertido: ";
	
	for(int i = 0; i < N; i++){
		cout << numeros[i] << " ";
	}
	return 0;
}

