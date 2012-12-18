/*
 * Generator.cpp
 *
 *  Created on: 18/12/2012
 *      Author: repli
 */

#include "../include/Generator.h"






void Generator::generateInsertionSortTime(ofstream &file, int V[], int n) {

	clock_t initalTime = clock();
	Sorting::insertionSort(V, n);
	clock_t finalTime = clock();
	float time = ((float) (finalTime - initalTime)) / (CLOCKS_PER_SEC);
	file << setprecision(PRECISION) << fixed << n << " " << time  << "\n";

}

void Generator::generateSelectionSortTime(ofstream &file, int V[], int n) {

	clock_t initalTime = clock();
	Sorting::insertionSort(V, n);
	clock_t finalTime = clock();
	float time = ((float) (finalTime - initalTime)) / CLOCKS_PER_SEC;
	file << setprecision(PRECISION) << fixed << n << " " << time << "\n";
}

void Generator::generateBubbleSortTime(ofstream &file, int V[], int n) {

	clock_t initalTime = clock();
	Sorting::bubbleSort(V, n);
	clock_t finalTime = clock();
	float time = ((float) (finalTime - initalTime)) / CLOCKS_PER_SEC;
	file << setprecision(PRECISION) << fixed << n << " " << time  << "\n";
}

void Generator::generateQuickSortTime(ofstream &file, int V[], int n) {
	clock_t initalTime = clock();
	Sorting::quickSort(V, 0, n);
		clock_t finalTime = clock();
		float time = ((float) (finalTime - initalTime)) / CLOCKS_PER_SEC;
		file << setprecision(PRECISION) << fixed << n << " " << time << "\n";

}

void Generator::generateMergeSortTime(ofstream &file, int V[], int n) {
	clock_t initalTime = clock();
	Sorting::mergeSort(V, 0, n);
	clock_t finalTime = clock();
	float time = ((float) (finalTime - initalTime)) / CLOCKS_PER_SEC;
	file << setprecision(PRECISION) << fixed << n << " " << time << "\n";

}


void Generator::generateInsertionSortDataFile(int problemSize, int V[], int GAP) {
	ofstream file("insertion-sort.txt");
	for (int i = 1; i <= problemSize; i += GAP - 1) {
		int arrayCopy[i];
		Helper::copyArray(V, arrayCopy, i);
		generateInsertionSortTime(file, arrayCopy, i);
	}

	file.close();
}

void Generator::generateSelectionSortDataFile(int problemSize, int V[], int GAP) {
	ofstream file("selection-sort.txt");
	for (int i = 1; i <= problemSize; i += GAP) {
		int arrayCopy[i];
		Helper::copyArray(V, arrayCopy, i);
		generateSelectionSortTime(file, arrayCopy, i);

	}
	file.close();
}

void Generator::generateBubbleSortDataFile(int problemSize, int V[], int GAP) {
	ofstream file("bubble-sort.txt");
	for (int i = 1; i <= problemSize; i += GAP) {
		int arrayCopy[i];
		Helper::copyArray(V, arrayCopy, i);
		generateBubbleSortTime(file, arrayCopy, i);

	}
	file.close();
}

void Generator::generateQuickSortDataFile(int problemSize, int V[], int GAP) {
	ofstream file("quick-sort.txt");
	for (int i = 1; i <= problemSize; i += GAP) {
		int arrayCopy[i];
		Helper::copyArray(V, arrayCopy, i);
		generateQuickSortTime(file, arrayCopy, i);
	}

	file.close();
}

void Generator::generateMergeSortDataFile(int problemSize, int V[], int GAP) {
	ofstream file("merge-sort.txt");
	for (int i = 1; i <= problemSize; i += GAP) {
		int arrayCopy[i];
		Helper::copyArray(V, arrayCopy, i);
		generateQuickSortTime(file, arrayCopy, i);
	}

	file.close();
}

void Generator::generateAllFiles(int problemSize, int V[], int GAP) {
	generateInsertionSortDataFile(problemSize, V, GAP);
	generateBubbleSortDataFile(problemSize, V, GAP);
	generateSelectionSortDataFile(problemSize, V, GAP);
	generateQuickSortDataFile(problemSize, V, GAP);
	generateMergeSortDataFile(problemSize, V, GAP);
}

