/*
 * main.cpp
 *
 *  Created on: 14/12/2012
 *      Author: repli
 */

#include "test.h"
#include "ordenacion.h"

int getProblemSize() {
	int problemSize;
	cout << "Enter the problem size (array length):";
	cin >> problemSize;
	return problemSize;
}

int getMaximumInteger() {
	int maxInt;
	cout << "Enter the maximum integer to generate (array length):";
	cin >> maxInt;
	return maxInt;
}

char chooseAlgorithm() {
	char option;

	cout << "select the algorithm for generating the data which:\n";
	cout << "1: Insertion Sort.\n";
	cout << "2: Selection Sort.\n";
	cout << "0: Exit.\n";
	cout << "Choose an option:";

	cin >> option;

	return option;
}

int main() {

	int problemSize = getProblemSize();
	int maxInt = getMaximumInteger();

	int V[problemSize];
	generateArray(V, problemSize, maxInt);

	bool exitMenu = false;


	while (!exitMenu) {
		char option = chooseAlgorithm();
		switch (option) {
		case '1':
			for (int i = 100; i < problemSize; i++) {
				int arrayCopy[i];
				copyArray(V, arrayCopy, i);
				generateInsertionSortTime(arrayCopy, i);
			}

			break;

		case '2':
			for (int i = 100; i < problemSize; i++) {
				int arrayCopy2[i];
				copyArray(V, arrayCopy2, i);
				generateSelectionSortTime(arrayCopy2, i);
			}

			break;

		case '0':
			exitMenu = true;
			break;

		default:
			break;
		}
	}

	return 0;
}
