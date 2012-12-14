/*
 * main.cpp
 *
 *  Created on: 14/12/2012
 *      Author: repli
 */

#include "test.h"
#include "interaction.h"
#include "generators.h"





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
			generateInsertionSortDataFile(problemSize, V);
			break;

		case '2':
			generateSelectionSortDataFile(problemSize, V);
			break;

		case '3':
					generateBubbleSortDataFile(problemSize, V);
					break;

		case '0':
			exitMenu = true;
			break;

		default:
			cout << "Choose a valid option.\n\n";
			break;
		}
	}

	return 0;
}
