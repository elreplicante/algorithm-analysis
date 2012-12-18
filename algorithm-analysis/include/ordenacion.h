#ifndef ORDENACION_H_
#define ORDENACION_H_

/**
 * @brief Performs an insertion sort algorithm on a vector of positive integers
 * @param V a vector of positive integers
 * @param num The array length
 */
void insertionSort(int V[], int num);

/**
 * @brief Performs a selection sort algorithm on a vector of positive integers
 * @param V a vector of positive integers
 * @param num The array length
 */
void selectionSort(int V[], int num);

/**
 * @brief Performs a bubble sort algorithm on a vector of positive integers
 * @param V a vector of positive integers
 * @param num The array length
 */
void bubbleSort(int V[], int num);

/**
 * @brief Performs a quick sort algorithm on a vector of positive integers.
 * @param V a vector of positive integers
 * @param left the left index for the divide and conquer strategy (initially 0)
 * @param right the right index for the divide and conquer strategy (initially the array length)
 */
void quickSort(int V[], int left, int right);

/**
 * @brief Performs a merge sort algorithm on a vector of positive integers.
 * @param V a vector of positive integers
 * @param left the left index for the divide and conquer strategy (initially 0)
 * @param right the right index for the divide and conquer strategy (initially the array length)
 */
void mergeSort(int V[], int left, int right);

#endif /* ORDENACION_H_ */
