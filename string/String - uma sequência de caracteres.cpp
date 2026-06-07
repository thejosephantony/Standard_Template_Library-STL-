#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string nome = "Joseph";

    cout << nome << endl;
    cout << nome[0] << endl;
    cout << nome.size() << endl;

    std::reverse(nome.begin(), nome.end());

    cout << nome << endl;

    return 0;
}

/*s.size();          // tamanho
s.empty();         // verifica se está vazia
s.push_back(c);    // adiciona caractere no final
s.pop_back();      // remove último caractere
s.front();         // primeiro caractere
s.back();          // último caractere
s.substr(i, qtd);  // substring
s.find("abc");     // busca substring*/
