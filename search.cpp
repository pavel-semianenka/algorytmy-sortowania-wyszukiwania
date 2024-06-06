#include "search.hpp"

int search(int *t, int size, int key) {
    int index = -1;
    for(int i = 0; i < size; ++i) {
        if(key == t[i]) {
            index = i;
            break;
        }
        //lub search_b if(key == t[i]) {
        //    return i;
        //}
    }
    return index;
    //lub search_b return -1; bez deklaracji indexu
}