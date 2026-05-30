#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iterator>  // iteradores 

int main(){
    cout << "Digite dois inteiros: ";

    std::istream_iterator<int> input(cin);  // iterador de entrada

    int num1 = *input;  // desreferencia o iterador para obter o valor
    ++input;
    int num2 = *input; // desreferencia o iterador para obter o valor

    std::ostream_iterator<int> output(cout);  // iterador de saída
     cout << "A soma é: ";
     *output = num1 + num2;  // escreve a soma usando o iterador de saída
     cout << endl;
     return 0;
}