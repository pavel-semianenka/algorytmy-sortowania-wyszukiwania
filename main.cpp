#include <iostream>
#include <cstdlib> // dla rand() i srand()
#include <ctime>   // dla time()
#include <windows.h> // dla ustawienia lokalizacji na polską w Windows
#include "search.hpp"
#include "sort.hpp"

int main()
{
    // Ustawienie lokalizacji na polską
    std::setlocale(LC_ALL, "pl_PL.UTF-8");
    // Tylko dla Windows:
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

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

    const int tt[SIZE] = { 2, 5, 7, 1, -7 };
    int tt_sorted[SIZE];
    const int k_exist_in_tt = 7;
    const int k_not_exist_in_tt = 8;

    std::cout << "Tablica dla wyszukiwania" << std::endl;
    wydrukuj_tablice(tt, SIZE);

    std::cout << "Istnująncy element: " << (k_exist_in_tt) << std::endl;
    std::cout << "Nie istnująncy element: " << (k_not_exist_in_tt) << std::endl;

    std::cout << "Wyszukiwanie binarne" << std::endl;
    std::cout << "Indeks istnująncego elementa " << wyszukiwanie_binarne(tt, SIZE, k_exist_in_tt) << std::endl;
    std::cout << "Indeks nie istnująncego elementa " << wyszukiwanie_binarne(tt, SIZE, k_not_exist_in_tt) << std::endl;

    std::cout <<  "Wyszukiwanie liniowe" << std::endl;
    std::cout << "Indeks istnująncego elementa " << wyszukiwanie_liniowe(tt, SIZE, k_exist_in_tt) << std::endl;
    std::cout << "Indeks nie istnująncego elementa " << wyszukiwanie_liniowe(tt, SIZE, k_not_exist_in_tt) << std::endl;

    std::cout <<  "Wyszukiwanie liniowe z wartownikiem" << std::endl;
    std::cout << "Indeks istnująncego elementa " << wyszukiwanie_liniowe_z_wart(tt, SIZE, k_exist_in_tt) << std::endl;
    std::cout << "Indeks nie istnująncego elementa " << wyszukiwanie_liniowe_z_wart(tt, SIZE, k_not_exist_in_tt) << std::endl;

    std::cout << "Wyszukiwanie interpolacyjne oraz skokowe zakładają, że tablica jest posortowana, więc sortujemy tablicą:" << std::endl;
    sortowanie_przez_wstawianie(tt, SIZE, tt_sorted);
    wydrukuj_tablice(tt_sorted, SIZE);

    std::cout << "Wyszukiwanie interpolacyjne" << std::endl;
    std::cout << "Indeks istnująncego elementa " << wyszukiwanie_interpolacyjne(tt_sorted, SIZE, k_exist_in_tt) << std::endl;
    std::cout << "Indeks nie istnująncego elementa " << wyszukiwanie_interpolacyjne(tt_sorted, SIZE, k_not_exist_in_tt) << std::endl;

    std::cout <<  "Wyszukiwanie skokowe" << std::endl;
    std::cout << "Indeks istnująncego elementa " << wyszukiwanie_skokowe(tt_sorted, SIZE, k_exist_in_tt) << std::endl;
    std::cout << "Indeks nie istnująncego elementa " << wyszukiwanie_skokowe(tt_sorted, SIZE, k_not_exist_in_tt) << std::endl;

    return 0;
}
