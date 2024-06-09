#include "sort.hpp"

#include <iostream>
#include <cstdlib> // dla rand() i srand()
#include <ctime>   // dla time()

void wypelnij_tablice(int *t, const int size) {
    // Ustawienie ziarna dla generatora liczb losowych
    //std::srand(std::time(0));

    for(int i = 0; i < size; ++i) {
        t[i] = std::rand() % 201 - 100; // Losowanie liczby w zakresie od -1000 do +1000
    }
}

void wydrukuj_tablice(const int *t, const int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << t[i] << " ";
    }
    std::cout << std::endl; // Przejście do nowej linii po wydrukowaniu tablicy
}
