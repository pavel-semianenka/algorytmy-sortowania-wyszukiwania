#include <iostream>
#include <cstdlib> // dla rand() i srand()
#include <ctime>   // dla time()
#include "search.hpp"
#include "sort.hpp"

int main()
{
    const int SIZE = 5;

    int t[SIZE];
    int t_out[SIZE];

    // Ustawienie ziarna dla generatora liczb losowych
    std::srand(std::time(0));

    std::cout <<  "Sortowanie bąbelkowe (Bubble Sort)" << std::endl;
    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_babelkowe(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    std::cout <<  "Sortowanie przez scalanie (Merge Sort)" << std::endl;
    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_przez_scalanie(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    std::cout <<  "Sortowanie szybkie (Quick Sort)" << std::endl;
    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_szybkie(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    std::cout <<  "Sortowanie przez wstrząsanie (Cocktail Shaker Sort)" << std::endl;
    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_przez_wstrzasanie(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    std::cout <<  "Sortowanie przez wstawianie (Insertion Sort)" << std::endl;
    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_przez_wstawianie(t, SIZE, t_out);
    wydrukuj_tablice(t_out, SIZE);

    int tt[SIZE] = { 2, 5, 7, 1, -7 };
    int k_exist_in_tt = 7;
    int k_not_exist_in_tt = 8;

    //std::cout << wyszukiwanie_binarne(tt, SIZE, k_exist_in_tt);
    //std::cout << wyszukiwanie_binarne(tt, SIZE, k_not_exist_in_tt);

    //std::cout << wyszukiwanie_liniowe(tt, SIZE, k_exist_in_tt);
    //std::cout << wyszukiwanie_liniowe(tt, SIZE, k_not_exist_in_tt);

    //std::cout << wyszukiwanie_liniowe_z_wart(tt, SIZE, k_exist_in_tt);
    //std::cout << wyszukiwanie_liniowe_z_wart(tt, SIZE, k_not_exist_in_tt);

    //std::cout << wyszukiwanie_interpolacyjne(tt, SIZE, k_exist_in_tt);
    //std::cout << wyszukiwanie_interpolacyjne(tt, SIZE, k_not_exist_in_tt);

    //std::cout << wyszukiwanie_skokowe(tt, SIZE, k_exist_in_tt);
    //std::cout << wyszukiwanie_skokowe(tt, SIZE, k_not_exist_in_tt);

    return 0;
}
