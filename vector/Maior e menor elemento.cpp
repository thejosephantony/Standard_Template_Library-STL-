/*
 * Maior e menor elemento.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main(){
	int N;
	int maior = 0;
	int menor = 0;
	
	cout << "Qual o tamanho do vector? ";
	cin >> N;
	
	vector<int> numeros(N);
	
	cout << "Insira os valores no vector: ";
	for(int i = 0; i < N; i++){
		cin >> numeros[i];
	}
	maior = numeros[0];
	menor = numeros[0];
	
	for(int i = 0; i < N; i++){
		
		if(numeros[i] > maior){
			maior = numeros[i];
		}
		if(numeros[i] < menor){
			menor = numeros[i];
		}
	}
/*
	int maior = *std::max_element(numeros.begin(), numeros.end());
    int menor = *std::min_element(numeros.begin(), numeros.end());

*/
	
	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;
	
	return 0;
	
}

