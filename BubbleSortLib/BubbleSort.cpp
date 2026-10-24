#include "BubbleSort.h"

void bubbleSort(vector<int>& vec) {
    int n = vec.size();
    // Adaptación del pseudocódigo a índices base 0 de C++
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 0; j < i; ++j) {
            if (vec[j] > vec[j + 1]) {
                int aux = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = aux;
            }
        }
    }
}