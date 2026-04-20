#include <iostream>
using std::cout;
using std::endl;

#include <vector> // definição do template da classe vector
using std::vector;
#include <iterator> // definição de iterators
#include <algorithm> // definição de algoritmos
#include <array> // definição de array
#include <stdexcept> // definição de std::out_of_range

int main(){
    const int SIZE = 6;
    int array[SIZE] = { 1, 2, 3, 4, 5, 6 }; // array de inteiros
    std::vector < int > inteiros( array, array + SIZE ); // cria um vector de inteiros usando o array
    std::ostream_iterator< int > output( cout, " " ); // cria um ostream_iterator para inteiros

    cout << "O vector de inteiros contem: ";
    std::copy( inteiros.cbegin(), inteiros.cend(), output ); // copia

    cout << "\nO primeiro elemento do vector é " << inteiros.front() <<
    "\nO ultimo elemento do vector é " << inteiros.back();

    inteiros[ 0 ] = 7; // altera o primeiro elemento do vector para 7
    inteiros.at( 5 ) = 10; // altera o ultimo elemento do vector para 10

    inteiros.insert( inteiros.begin(), 1 ); // insere 1 no inicio do vector
    cout << "\n\nO vector de inteiros contem após as mudanças: ";
    std::copy( inteiros.cbegin(), inteiros.cend(), output ); // copia

    try{
        inteiros.at( 10 ) = 100; // tenta alterar o elemento na posição 10 do vector

    }
    catch( std::out_of_range &excecao ){
        cout << "\n\nExceção: " << excecao.what() << endl;
    }

    inteiros.erase( inteiros.begin() ); // remove o primeiro elemento do vector
    cout << "\nO vector de inteiros contem após a remoção do primeiro elemento: ";
    std::copy( inteiros.cbegin(), inteiros.cend(), output ); // copia

    inteiros.erase(inteiros.begin(), inteiros.end());
    cout << "\nO vector de inteiros contem após a remoção de todos os elementos: ";
    cout << "\n Após o erase todos os elementos do vector foram removidos, o size do vector é " << (inteiros.empty() ? "is " : "is not ") << "empty";
    inteiros.insert(inteiros.begin(), array, array + SIZE); // insere os elementos do array no vector
    cout << "\nO vector de inteiros contem após a reinserção dos elementos do array: ";
    std::copy( inteiros.cbegin(), inteiros.cend(), output ); // copia

    inteiros.clear(); // remove todos os elementos do vector
    cout << "\nO vector de inteiros contem após a chamada do clear: ";
    cout << "\n Após o clear todos os elementos do vector foram removidos, o size";
    cout << "\nO vector de inteiros contem após a chamada do clear: ";
    cout << "\n Após o clear todos os elementos do vector foram removidos, o size do vector é " << (inteiros.empty() ? "is " : "is not ") << "empty";
    return 0;
}