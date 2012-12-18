/*
 *
 * Main application file
 *
 * Gets data from user and controls the execution
 *
 */

#include "../include/test.h"
#include "../include/interaction.h"
#include "../include/generators.h"

int main() {

	int problemSize = getProblemSize();
	int maxInt = getMaximumInteger();
	int GAP = getGap();

	int V[problemSize];
	generateArray(V, problemSize, maxInt);
	printArrayContents(V, problemSize);

	bool exitMenu = false;

	while (!exitMenu) {
		char option = chooseAlgorithm();
		switch (option) {
		case '1':
			generateInsertionSortDataFile(problemSize, V, GAP);
			break;

		case '2':
			generateSelectionSortDataFile(problemSize, V, GAP);
			break;

		case '3':
			generateBubbleSortDataFile(problemSize, V, GAP);
			break;

		case '4':
			generateQuickSortDataFile(problemSize, V, GAP);
			break;

		case '5':
			generateMergeSortDataFile(problemSize, V, GAP);
			break;

		case '6': {
			generateAllFiles(problemSize, V, GAP);
			break;
		}

		case '0':
			exitMenu = true;
			break;

		default:
			//cout << "Choose a valid option.\n\n";
			break;
		}
	}

	return 0;
}
