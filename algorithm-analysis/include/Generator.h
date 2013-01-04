/**
 * @class Generator
 * @brief Static methods that generates data from user input values
 *
 *
 * @author Sergio Revilla
 */
#include "../include/Helper.h"
#include <time.h>


#define PRECISION 50

#ifndef GENERATOR_H_
#define GENERATOR_H_

class Generator {

public:


	/**
	 * @brief Generates problem size time data file for insertion sort algorithm
	 * @param problemSize maximum array length
	 * @param V unsorted array
	 * @param GAP array's length increase
	 */
	static void generateInsertionSortDataFile(int problemSize, int V[], int GAP);

	/**
	 * @brief Generates problem size time data file for selection sort algorithm
	 * @param problemSize maximum array length
	 * @param V unsorted array
	 * @param GAP array's length increase
	 */
	static void generateSelectionSortDataFile(int problemSize, int V[], int GAP);

	/**
	 * @brief Generates problem size time data file for bubble sort algorithm
	 * @param problemSize maximum array length
	 * @param V unsorted array
	 * @param GAP array's length increase
	 */
	static void generateBubbleSortDataFile(int problemSize, int V[], int GAP);

	/**
	 * @brief Generates problem size time data file for quick sort algorithm
	 * @param problemSize maximum array length
	 * @param V unsorted array
	 * @param GAP array's length increase
	 */
	static void generateQuickSortDataFile(int problemSize, int V[], int GAP);

	/**
	 * @brief Generates problem size time data file for merge sort algorithm
	 * @param problemSize maximum array length
	 * @param V unsorted array
	 * @param GAP array's length increase
	 */
	static void generateMergeSortDataFile(int problemSize, int V[], int GAP);

	/**
	 * @brief Generates time data files for all algorithms
	 * @param problemSize maximum array length
	 * @param V unsorted array
	 * @param GAP array's length increase
	 */
	static void generateAllFiles(int problemSize, int V[], int GAP);


private:
	/**
		 * @brief Generates time data for insertion sort algorithm
		 * @param file output file
		 * @param V unsorted array
		 * @param n array length
		 */
		static void generateInsertionSortTime(ofstream &file, int V[], int n);

		/**
		 * @brief Generates time data for selection sort algorithm
		 * @param file output file
		 * @param V unsorted array
		 * @param n array length
		 */
		static void generateSelectionSortTime(ofstream &file, int V[], int n);

		/**
		 * @brief Generates time data for bubble sort algorithm
		 * @param file output file
		 * @param V unsorted array
		 * @param n array length
		 */
		static void generateBubbleSortTime(ofstream &file, int V[], int n);

		/**
		 * @brief Generates time data for quick sort algorithm
		 * @param file output file
		 * @param V unsorted array
		 * @param n array length
		 */
		static void generateQuickSortTime(ofstream &file, int V[], int n);

		/**
		 * @brief Generates time data for merge sort algorithm
		 * @param file output file
		 * @param V unsorted array
		 * @param n array length
		 */
		static void generateMergeSortTime(ofstream &file, int V[], int n);
};

#endif /* GENERATOR_H_ */
