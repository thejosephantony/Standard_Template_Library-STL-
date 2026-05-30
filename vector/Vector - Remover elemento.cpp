/*
 * Vector - Remover elemento.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */


#include <iostream>
#include <vector>
#include <locale>
#include <algorithm>

using std::cout;
using std::vector;
using std::cin;
using std::endl;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int N;
	int num;
	
	cout << "Insira o tamanho do vector: ";
	cin >> N;
	
	vector<int> numeros(N);
	
	cout << "Insira os elementos do vector de tamanho " << N << ": ";
	for(int i = 0; i < N; i++){
		cin >> numeros[i];
	}
	
	cout << "Insira o elemento que queres remover no vector: ";
	cin >> num;
	numeros.erase(remove(numeros.begin(), numeros.end(), num), numeros.end());
	
	cout << "Vector final: ";
	for (int i = 0; i < static_cast<int>(numeros.size()); i++) {
		cout << numeros[i] << " ";
	}
	
	cout << endl;
	
	return 0;

}
