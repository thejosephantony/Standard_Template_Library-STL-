/*
 * string_examples.cpp
 * 
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 * 
 * 
 * 
 */


#include <iostream>
#include <string>
#include <algorithm>

#include "string_examples.h"

using std::cout;
using std::endl;
using std::string;

void exemplosString() {
    // Criando strings
    string nome = "Joseph";
    string sobrenome = "Antony";

    cout << "Nome: " << nome << endl;
    cout << "Sobrenome: " << sobrenome << endl;

    // Concatenação
    string completo = nome + " " + sobrenome;

    cout << "Nome completo: " << completo << endl;

    // size e length
    cout << "Tamanho com size(): " << completo.size() << endl;
    cout << "Tamanho com length(): " << completo.length() << endl;

    // empty
    if (completo.empty()) {
        cout << "String vazia" << endl;
    } else {
        cout << "String nao vazia" << endl;
    }

    // Acesso por índice
    cout << "Primeiro caractere: " << completo[0] << endl;

    // at
    cout << "Caractere na posicao 1: " << completo.at(1) << endl;

    // front e back
    cout << "Front: " << completo.front() << endl;
    cout << "Back: " << completo.back() << endl;

    // Alterando caractere
    completo[0] = 'j';

    cout << "Depois de alterar primeira letra: " << completo << endl;

    // push_back: adicionar caractere
    completo.push_back('!');

    cout << "Depois do push_back: " << completo << endl;

    // pop_back: remover último caractere
    completo.pop_back();

    cout << "Depois do pop_back: " << completo << endl;

    // append
    completo.append(" Silva");

    cout << "Depois do append: " << completo << endl;

    // insert
    completo.insert(0, "Sr. ");

    cout << "Depois do insert: " << completo << endl;

    // erase
    completo.erase(0, 4);

    cout << "Depois do erase: " << completo << endl;

    // substr
    string parte = completo.substr(0, 6);

    cout << "Substring: " << parte << endl;

    // find
    size_t pos = completo.find("Antony");

    if (pos != string::npos) {
        cout << "Antony encontrado na posicao: " << pos << endl;
    } else {
        cout << "Antony nao encontrado" << endl;
    }

    // replace
    completo.replace(pos, 6, "A.");

    cout << "Depois do replace: " << completo << endl;

    // Comparação
    string a = "abc";
    string b = "abd";

    if (a == b) {
        cout << "a e b sao iguais" << endl;
    } else {
        cout << "a e b sao diferentes" << endl;
    }

    if (a < b) {
        cout << "abc vem antes de abd" << endl;
    }

    // Ordenar caracteres de uma string
    string palavra = "programacao";

    sort(palavra.begin(), palavra.end());

    cout << "Palavra ordenada: " << palavra << endl;

    // Inverter string
    reverse(palavra.begin(), palavra.end());

    cout << "Palavra invertida: " << palavra << endl;

    // count: contar caractere
    string texto = "banana";

    int qtdA = count(texto.begin(), texto.end(), 'a');

    cout << "Quantidade de letras a em banana: " << qtdA << endl;

    // Remover caractere usando erase-remove
    texto.erase(
        remove(texto.begin(), texto.end(), 'a'),
        texto.end()
    );

    cout << "Depois de remover letras a: " << texto << endl;

    // Percorrendo string com índice
    string linguagem = "cpp";

    cout << "Percorrendo com indice: ";
    for (int i = 0; i < static_cast<int>(linguagem.size()); i++) {
        cout << linguagem[i] << " ";
    }
    cout << endl;

    // Percorrendo string com range-based for
    cout << "Percorrendo com range-based for: ";
    for (char c : linguagem) {
        cout << c << " ";
    }
    cout << endl;
}
