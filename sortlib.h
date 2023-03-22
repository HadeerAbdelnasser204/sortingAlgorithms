// Data structure Assignment.
// Created by Hadeer Abdelnasser on 3/18/2023.
//Sorting Algorithms.

#ifndef DATA_S_SORTING_H
#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;
namespace sortlib
{
    template<typename T>
    void insertionSort(T Array[], int size);

    template<typename T>
    void selectionSort(T array[], int size);

    template<typename T>
    void bubbleSort(T array[], int size);

    template<typename T>
    void shellSort(T Array[], int size);

    template<typename T>
    void mergeSort(T Array[], int left, int right);

    template<typename T>
    void quickSort(T array[], int begin, int end);

    template<typename T>
    void countSort(T array[], int size);

}
#define DATA_S_SORTING_H

#endif //DATA_S_SORTING_H
