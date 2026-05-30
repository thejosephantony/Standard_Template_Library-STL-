/*
 * Vector - Buscar elemento.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */

#include <iostream>
#include <algorithm>
#include <vector>
#include <locale>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int N;
	int num;
	
	cout << "Insira o tamanho do vector: ";
	cin >> N;
	
	vector<int> numeros(N);
	
	cout << "Insira os valores no vector de tamanho " << N << ": ";
	for(int i = 0; i < N; i++){
		cin >> numeros[i];
	}
	cout << "Insira o número que queres buscar no vector: ";
	cin >> num;
	
	auto busca = find(numeros.begin(), numeros.end(), num);
	if(busca != numeros.end()){
		cout << "Encontrado." << endl;
	}
	else{
		cout << "Não encontrado." << endl;
	}
	return 0;
}


// O(N)
