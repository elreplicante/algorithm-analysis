/**
 * @class Sorting
 * @brief Sorting algorithms
 *
 *
 * @author Sergio Revilla
 */

#ifndef SORTING_H_
#define SORTING_H_

class Sorting {

public:
	/**
	 * @brief Performs an insertion sort algorithm on an array of positive integers
	 * @param V an array of positive integers
	 * @param num The array length
	 */
	static void insertionSort(int V[], int num);

	/**
	 * @brief Performs a selection sort algorithm on an array of positive integers
	 * @param V an array of positive integers
	 * @param num The array length
	 */
	static void selectionSort(int V[], int num);

	/**
	 * @brief Performs a bubble sort algorithm on an array of positive integers
	 * @param V an array of positive integers
	 * @param num The array length
	 */
	static void bubbleSort(int V[], int num);

	/**
	 * @brief Performs a quick sort algorithm on an array of positive integers.
	 * @param V an array of positive integers
	 * @param left the left index for the divide and conquer strategy (initially 0)
	 * @param right the right index for the divide and conquer strategy (initially the array length)
	 */
	static void quickSort(int V[], int left, int right);

	/**
	 * @brief Performs a merge sort algorithm on an array of positive integers.
	 * @param V an array of positive integers
	 * @param left the left index for the divide and conquer strategy (initially 0)
	 * @param right the right index for the divide and conquer strategy (initially the array length)
	 */
	static void mergeSort(int V[], int left, int right);

private:
	static void merge(int V[], int left, int half, int right);

};

#endif /* SORTING_H_ */
