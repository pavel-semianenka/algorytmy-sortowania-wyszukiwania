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

//
// Sortowanie bąbelkowe (Bubble Sort)
//

void sortowanie_babelkowe(int *t, const int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (t[j] > t[j + 1]) {
                std::swap(t[j], t[j + 1]);
            }
        }
    }
}

//
// Sortowanie przez scalanie (Merge Sort)
//

void merge(int *t, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int *L = new int[n1];
    int *R = new int[n2];

    for (int i = 0; i < n1; ++i)
        L[i] = t[left + i];
    for (int i = 0; i < n2; ++i)
        R[i] = t[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            t[k] = L[i];
            ++i;
        } else {
            t[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        t[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        t[k] = R[j];
        ++j;
        ++k;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int *t, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(t, left, mid);
        mergeSort(t, mid + 1, right);
        merge(t, left, mid, right);
    }
}

void sortowanie_przez_scalanie(int *t, const int size) {
    mergeSort(t, 0, size - 1);
}

//
//Sortowanie szybkie (Quick Sort)
//

int partition(int *t, int low, int high) {
    int pivot = t[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (t[j] < pivot) {
            ++i;
            std::swap(t[i], t[j]);
        }
    }
    std::swap(t[i + 1], t[high]);
    return i + 1;
}

void quickSort(int *t, int low, int high) {
    if (low < high) {
        int pi = partition(t, low, high);
        quickSort(t, low, pi - 1);
        quickSort(t, pi + 1, high);
    }
}

void sortowanie_szybkie(int *t, const int size) {
    quickSort(t, 0, size - 1);
}

//
//Sortowanie przez wstrząsanie (Cocktail Shaker Sort)
//

void sortowanie_przez_wstrzasanie(int *t, const int size) {
    bool swapped = true;
    int start = 0;
    int end = size - 1;

    while (swapped) {
        swapped = false;
        for (int i = start; i < end; ++i) {
            if (t[i] > t[i + 1]) {
                std::swap(t[i], t[i + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
        swapped = false;
        --end;
        for (int i = end - 1; i >= start; --i) {
            if (t[i] > t[i + 1]) {
                std::swap(t[i], t[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
}

//
//Sortowanie przez wstawianie (Insertion Sort)
//

void sortowanie_przez_wstawianie(const int *t, const int size, int *t_out) {
    for (int i = 0; i < size; ++i) {
        t_out[i] = t[i];
    }

    for (int i = 1; i < size; ++i) {
        int key = t_out[i];
        int j = i - 1;

        while (j >= 0 && t_out[j] > key) {
            t_out[j + 1] = t_out[j];
            --j;
        }
        t_out[j + 1] = key;
    }
}

