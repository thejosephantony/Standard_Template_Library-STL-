/*
 * Contar ocorrências de um número.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */


#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::count;

int main(){
	int N;
	int num;
	int qtd;
	
	cout << "Insira o tamanho do vector: ";
	cin >> N;
	
	vector<int> numeros(N);
	
	cout << "Insira os valores no vector de " << N << " tamanho: ";
	
	for(int i = 0; i < N; i++){
		cin >> numeros[i];
	}
	
	cout << "Qual numero desejas procurar no vector? ";
	cin >> num;
	
	qtd = count(numeros.begin(), numeros.end(), num);
	
	cout << "O numero " << num << " aparece " << qtd << " vez(es)." << endl;
	
	return 0;
}

