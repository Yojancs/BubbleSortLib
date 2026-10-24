#include "pch.h"
#include <gtest/gtest.h>
#include "BubbleSort.h" 
#include <vector>
using namespace std;

// CP1: Vector con un solo elemento.
TEST(BubbleSortTest, CP1_VectorUnSoloElemento) {
    vector<int> entrada = { 42 };
    vector<int> esperado = { 42 };
    bubbleSort(entrada);
    EXPECT_EQ(entrada, esperado);
}

// CP2: Vector ya ordenado (el if nunca se activa).
TEST(BubbleSortTest, CP2_VectorYaOrdenado) {
    vector<int> entrada = { 1, 2, 3, 4, 5 };
    vector<int> esperado = { 1, 2, 3, 4, 5 };
    bubbleSort(entrada);
    EXPECT_EQ(entrada, esperado);
}

// CP3: Una sola inversión (el if es verdadero exactamente una vez).
TEST(BubbleSortTest, CP3_UnaSolaInversion) {
    vector<int> entrada = { 1, 3, 2 };
    vector<int> esperado = { 1, 2, 3 };
    bubbleSort(entrada);
    EXPECT_EQ(entrada, esperado);
}

// CP4: Vector desordenado (múltiples inversiones y combinaciones mixtas).
TEST(BubbleSortTest, CP4_MultiplesInversiones) {
    vector<int> entrada = { 5, 2, 8, 1, 9 };
    vector<int> esperado = { 1, 2, 5, 8, 9 };
    bubbleSort(entrada);
    EXPECT_EQ(entrada, esperado);
}