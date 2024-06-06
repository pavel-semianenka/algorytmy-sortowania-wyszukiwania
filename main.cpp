#include <iostream>
#include "search.hpp"

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

    return 0;
}