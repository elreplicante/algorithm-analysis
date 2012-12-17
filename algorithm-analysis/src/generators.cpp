#include "../include/generators.h"

void generateInsertionSortTime(ofstream &file, int V[], int n) {

	clock_t initalTime = clock();
	insertionSort(V, n);
	clock_t finalTime = clock();
	float time = ((float) (finalTime - initalTime)) / (CLOCKS_PER_SEC);
	file << setprecision(PRECISION) << fixed << n << " " << time  << "\n";

}

void generateSelectionSortTime(ofstream &file, int V[], int n) {

	clock_t initalTime = clock();
	insertionSort(V, n);
	clock_t finalTime = clock();
	float time = ((float) (finalTime - initalTime)) / CLOCKS_PER_SEC;
	file << setprecision(PRECISION) << fixed << n << " " << time << "\n";
}

void generateBubbleSortTime(ofstream &file, int V[], int n) {

	clock_t initalTime = clock();
	bubbleSort(V, n);
	clock_t finalTime = clock();
	float time = ((float) (finalTime - initalTime)) / CLOCKS_PER_SEC;
	file << setprecision(PRECISION) << fixed << n << " " << time  << "\n";
}

void generateQuickSortTime(ofstream &file, int V[], int n) {
	clock_t initalTime = clock();
		quickSort(V, 0, n);
		clock_t finalTime = clock();
		float time = ((float) (finalTime - initalTime)) / CLOCKS_PER_SEC;
		file << setprecision(PRECISION) << fixed << n << " " << time << "\n";

}


void generateInsertionSortDataFile(int problemSize, int V[], int GAP) {
	ofstream file("insertion-sort.txt");
	for (int i = 1; i <= problemSize; i += GAP - 1) {
		int arrayCopy[i];
		copyArray(V, arrayCopy, i);
		generateInsertionSortTime(file, arrayCopy, i);
	}

	file.close();
}

void generateSelectionSortDataFile(int problemSize, int V[], int GAP) {
	ofstream file("selection-sort.txt");
	for (int i = 1; i <= problemSize; i += GAP) {
		int arrayCopy[i];
		copyArray(V, arrayCopy, i);
		generateSelectionSortTime(file, arrayCopy, i);

	}
	file.close();
}

void generateBubbleSortDataFile(int problemSize, int V[], int GAP) {
	ofstream file("bubble-sort.txt");
	for (int i = 1; i <= problemSize; i += GAP) {
		int arrayCopy[i];
		copyArray(V, arrayCopy, i);
		generateBubbleSortTime(file, arrayCopy, i);

	}
	file.close();
}

void generateQuickSortDataFile(int problemSize, int V[], int GAP) {
	ofstream file("quick-sort.txt");
	for (int i = 1; i <= problemSize; i += GAP) {
		int arrayCopy[i];
		copyArray(V, arrayCopy, i);
		generateQuickSortTime(file, arrayCopy, i);
	}

	file.close();
}

void generateAllFiles(int problemSize, int V[], int GAP) {
	generateInsertionSortDataFile(problemSize, V, GAP);
	generateBubbleSortDataFile(problemSize, V, GAP);
	generateSelectionSortDataFile(problemSize, V, GAP);
	generateQuickSortDataFile(problemSize, V, GAP);
}

