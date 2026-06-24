/*
 * Tuple.cpp
 *
 * Copyright 2026 Joseph <Joseph@JOSEPHPC>
 */

// Quando dois valores não são suficientes.
// Guarda qualquer quantidade de valores.

#include <iostream>
#include <tuple>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::tuple;

int main() {
    tuple<string, int, double> pessoa = {"Joseph", 24, 1.73};

    cout << std::get<0>(pessoa) << endl;
    cout << std::get<1>(pessoa) << endl;
    cout << std::get<2>(pessoa) << endl;

    return 0;
}
