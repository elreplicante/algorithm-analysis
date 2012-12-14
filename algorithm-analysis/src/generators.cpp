/*
 * generators.cpp
 *
 *  Created on: 14/12/2012
 *      Author: repli
 */

#include "generators.h"

void generateInsertionSortTime(ofstream &file, int V[], int n) {

	clock_t initalTime = clock();
	insertionSort(V, n);
	clock_t finalTime = clock();
	float time = ((float) (finalTime - initalTime)) / CLOCKS_PER_SEC;
	file << setprecision(20) << fixed << n << " " << time << "\n";

}

void generateSelectionSortTime(ofstream &file, int V[], int n) {

	clock_t initalTime = clock();
	insertionSort(V, n);
	clock_t finalTime = clock();
	float time = ((float) (finalTime - initalTime)) / CLOCKS_PER_SEC;
	file << setprecision(20) << fixed << n << " " << time << "\n";
}

void generateBubbleSortTime(ofstream &file, int V[], int n) {

	clock_t initalTime = clock();
	bubbleSort(V, n);
	clock_t finalTime = clock();
	float time = ((float) (finalTime - initalTime)) / CLOCKS_PER_SEC;
	file << setprecision(20) << fixed << n << " " << time << "\n";
}

void generateInsertionSortDataFile(int problemSize, int V[]) {
	ofstream file("insertion-sort.txt");
	for (int i = 100; i < problemSize; i++) {
		int arrayCopy[i];
		copyArray(V, arrayCopy, i);
		generateInsertionSortTime(file, arrayCopy, i);
	}

	file.close();
}

void generateSelectionSortDataFile(int problemSize, int V[]) {
	ofstream file("selection-sort.txt");
	for (int i = 100; i < problemSize; i++) {
		int arrayCopy[i];
		copyArray(V, arrayCopy, i);
		generateSelectionSortTime(file, arrayCopy, i);

	}
	file.close();
}

void generateBubbleSortDataFile(int problemSize, int V[]) {
	ofstream file("bubble-sort.txt");
	for (int i = 100; i < problemSize; i++) {
		int arrayCopy[i];
		copyArray(V, arrayCopy, i);
		generateBubbleSortTime(file, arrayCopy, i);

	}
	file.close();
}
