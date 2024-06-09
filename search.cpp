#include <cmath>
#include <algorithm>
#include "search.hpp"

//
//Wyszukiwanie binarne
//

int wyszukiwanie_binarne(const int *t, const int size, const int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (t[mid] == key) {
            return mid; // Element found
        }
        if (t[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Element not found
}

//
//Wyszukiwanie liniowe
//

int wyszukiwanie_liniowe(const int *t, const int size, const int key) {
    for (int i = 0; i < size; ++i) {
        if (t[i] == key) {
            return i; // Element found
        }
    }
    return -1; // Element not found
}

//
//Wyszukiwanie liniowe z wartownikiem
//

int wyszukiwanie_liniowe_z_wart(const int *t, const int size, const int key) {
    int* wartownik = new int[size + 1];
    for (int i = 0; i < size; ++i) {
        wartownik[i] = t[i];
    }
    wartownik[size] = key; // Dodanie wartownika

    int i = 0;
    while (wartownik[i] != key) {
        ++i;
    }

    delete[] wartownik;
    if (i == size) {
        return -1; // Element not found
    } else {
        return i; // Element found
    }
}

//
//Wyszukiwanie interpolacyjne
//

int wyszukiwanie_interpolacyjne(const int *t, const int size, const int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high && key >= t[low] && key <= t[high]) {
        if (low == high) {
            if (t[low] == key) {
                return low;
            }
            return -1;
        }

        int pos = low + ((double)(high - low) / (t[high] - t[low])) * (key - t[low]);

        if (t[pos] == key) {
            return pos;
        }

        if (t[pos] < key) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1; // Element not found
}

//
//Wyszukiwanie skokowe
//

int wyszukiwanie_skokowe(const int *t, const int size, const int key) {
    int step = std::sqrt(size);
    int prev = 0;

    while (t[std::min(step, size) - 1] < key) {
        prev = step;
        step += std::sqrt(size);
        if (prev >= size) {
            return -1; // Element not found
        }
    }

    while (t[prev] < key) {
        ++prev;
        if (prev == std::min(step, size)) {
            return -1; // Element not found
        }
    }

    if (t[prev] == key) {
        return prev; // Element found
    }

    return -1; // Element not found
}
