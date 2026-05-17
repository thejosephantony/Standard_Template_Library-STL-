#include <iostream>
#include <string>
#include <algorithm>
#include <clocale>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string nome1;
    string nome2;

    cout << "Insira o primeiro nome: ";
    getline(cin, nome1);

    cout << "Insira o segundo nome: ";
    getline(cin, nome2);

    std::sort(nome1.begin(), nome1.end());
    std::sort(nome2.begin(), nome2.end());

    if (nome1 == nome2) {
        cout << "São anagramas" << endl;
    } else {
        cout << "Não são anagramas" << endl;
    }

    return 0;
}
