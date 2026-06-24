/*
 * Struct.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 */


#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct Pessoa{
	string nome;
	int idade;
	double altura;
};


int main(){
	Pessoa p1;
	
	p1.nome = "Joseph";
	p1.idade = 24;
	p1.altura = 1.74;
	
	cout << p1.nome << endl;
	cout << p1.idade << endl;
	cout << p1.altura << endl;
	
	return 0;
}

