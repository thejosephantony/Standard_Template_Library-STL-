/*
 * Média aritmética.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 */


#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main(){
	int N;
	double somaElem = 0.0;
	double mediaAritmetica;
	
	cout << "Insira o tamanho do vector: ";
	cin >> N;
	
	vector<double> numeros(N);
	
	cout << "Insira os valores do vector de tamanho " << N << ": ";
	for(int i = 0; i < N; i++){
		cin >> numeros[i];
	}
	
	for(int i = 0; i < N; i++){
		somaElem = somaElem + numeros[i];
	}
	
	mediaAritmetica = somaElem/((numeros.size()));
	
	cout << "A soma dos elementos do vector: " << somaElem << endl;
	cout << "A media dos elementos do vector: " << mediaAritmetica << endl;
	
	
	return 0;
}

