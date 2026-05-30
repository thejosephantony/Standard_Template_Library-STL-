#include <iostream>

using std::cout;
using std::endl;

#include <vector> // definição do template da classe vector
using std::vector;

template < typename T > void printVector( const vector < T > &inteiros);

int main(){
        const int SIZE = 6; // tamanho do vector
        int array[SIZE] = { 1, 2, 3, 4, 5, 6 }; // array de inteiros
        vector < int > inteiros; // cria um vector de inteiros

    cout << "O size do vector é " << inteiros.size() << 
    "\n A capacidade do vector é " << inteiros.capacity();

    inteiros.push_back( 7 ); // adiciona 7 ao final do vector
    inteiros.push_back( 8 ); // adiciona 8 ao final do vector
    inteiros.push_back( 9 ); // adiciona 9 ao final do vector

    cout << "\n\nO size do vector é " << inteiros.size() << 
    "\n A capacidade do vector é " << inteiros.capacity();
    cout << "\n\n A saida do vector usando a primeira função printVector: ";

    for(int *ptr = array; ptr != array + SIZE; ++ptr){
        cout << *ptr << " ";
    }
    cout << "\n\n A saida do vector usando a segunda função printVector: ";
    printVector(inteiros);

    vector< int >::const_reverse_iterator reverseIterator; // cria um reverse_iterator para vector de inteiros
    vector< int >::const_reverse_iterator tempIterator = inteiros.rend(); // inicializa tempIterator para o reverse_iterator do final do vector

    for(reverseIterator = inteiros.rbegin(); reverseIterator != tempIterator; ++reverseIterator){
        cout << *reverseIterator << " ";
    }
    cout << endl;
    return 0;
}

template < typename T > void printVector( const vector < T > &inteiros){
    typename vector < T > ::const_iterator iterator; // cria um const_iterator para vector de inteiros

    for(constIterator = inteiros.begin(); constIterator != inteiros.end(); ++constIterator){
        cout << *constIterator << " ";
    }
}


