#include "aux.h"
#include <time.h>
#ifndef GENERATORS_H_
#define GENERATORS_H_

#define PRECISION 20

/**
 * @brief Generates time data for insertion sort algorithm
 * @param file output file
 * @param V unsorted array
 * @param n array length
 */
void generateInsertionSortTime(ofstream &file, int V[], int n);

/**
 * @brief Generates time data for selection sort algorithm
 * @param file output file
 * @param V unsorted array
 * @param n array length
 */
void generateSelectionSortTime(ofstream &file, int V[], int n);

/**
 * @brief Generates time data for bubble sort algorithm
 * @param file output file
 * @param V unsorted array
 * @param n array length
 */
void generateBubbleSortTime(ofstream &file, int V[], int n);

/**
 * @brief Generates time data for quick sort algorithm
 * @param file output file
 * @param V unsorted array
 * @param n array length
 */
void generateQuickSortTime(ofstream &file, int V[], int n);


/**
 * @brief Generates problem size time data file for insertion sort algorithm
 * @param problemSize maximum array length
 * @param V unsorted array
 * @param GAP array's length increase
 */
void generateInsertionSortDataFile(int problemSize, int V[], int GAP);

/**
 * @brief Generates problem size time data file for selection sort algorithm
 * @param problemSize maximum array length
 * @param V unsorted array
 * @param GAP array's length increase
 */
void generateSelectionSortDataFile(int problemSize, int V[], int GAP);

/**
 * @brief Generates problem size time data file for bubble sort algorithm
 * @param problemSize maximum array length
 * @param V unsorted array
 * @param GAP array's length increase
 */
void generateBubbleSortDataFile(int problemSize, int V[], int GAP);

/**
 * @brief Generates problem size time data file for quick sort algorithm
 * @param problemSize maximum array length
 * @param V unsorted array
 * @param GAP array's length increase
 */
void generateQuickSortDataFile(int problemSize, int V[], int GAP);


/**
 * @brief Generates time data files for all algorithms
 * @param problemSize maximum array length
 * @param V unsorted array
 * @param GAP array's length increase
 */
void generateAllFiles(int problemSize, int V[], int GAP);

#endif /* GENERATORS_H_ */
