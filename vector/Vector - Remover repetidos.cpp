/*
 * Vector - Remover repetidos.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
	int N;
	
	cout << "Insira o tamanho do vector: ";
	cin >> N;
	
	vector<int> numeros(N);
	
	cout << "Insira os valores do vector de tamanho " << N << ": ";
	for(int i = 0; i < N; i++){
		cin >> numeros[i];
	}
	sort(numeros.begin(), numeros.end());
	numeros.erase(unique(numeros.begin(), numeros.end()), numeros.end());
	
	cout << "Vector final, sem repetidos e em ordem crescente: ";
	for(int x : numeros){
		cout << x << " ";
	}
	return 0;
}
