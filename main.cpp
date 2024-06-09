#include <iostream>
#include "search.hpp"
#include "sort.hpp"

int main()
{
    constexpr int size = 5;
    constexpr int key_1 = 5;
    constexpr int key_2 = 33;
    int table[size] = {1,2,3,4,5};

    int res = search(table, size, key_1);

    std::cout << "W tablicy klucz o watosci:" << key_1
              << " znajduje sie pod indeksem: " << res << std::endl;

    res = search(table, size, key_2);
    std::cout << "W tablicy klucz o watosci:" << key_2
              << " znajduje sie pod indeksem: " << res << std::endl;

    /* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    const int SIZE = 5;

    int t[SIZE];
    int t_out[SIZE];

    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_babelkowe(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_przez_scalanie(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_szybkie(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_przez_wstrzasanie(t, SIZE);
    wydrukuj_tablice(t, SIZE);

    wypelnij_tablice(t, SIZE);
    wydrukuj_tablice(t, SIZE);
    sortowanie_przez_wstawianie(t, SIZE, t_out);
    wydrukuj_tablice(t, SIZE);

    int tt[SIZE] = { 2, 5, 7, 1, -7 };
    int k_exist_in_tt = 7;
    int k_not_exist_in_tt = 8;

    std::cout << wyszukiwanie_binarne(tt, SIZE, k_exist_in_tt);
    std::cout << wyszukiwanie_binarne(tt, SIZE, k_not_exist_in_tt);

    std::cout << wyszukiwanie_liniowe(tt, SIZE, k_exist_in_tt);
    std::cout << wyszukiwanie_liniowe(tt, SIZE, k_not_exist_in_tt);

    std::cout << wyszukiwanie_liniowe_z_wart(tt, SIZE, k_exist_in_tt);
    std::cout << wyszukiwanie_liniowe_z_wart(tt, SIZE, k_not_exist_in_tt);

    std::cout << wyszukiwanie_interpolacyjne(tt, SIZE, k_exist_in_tt);
    std::cout << wyszukiwanie_interpolacyjne(tt, SIZE, k_not_exist_in_tt);

    std::cout << wyszukiwanie_skokowe(tt, SIZE, k_exist_in_tt);
    std::cout << wyszukiwanie_skokowe(tt, SIZE, k_not_exist_in_tt);

    return 0;
}