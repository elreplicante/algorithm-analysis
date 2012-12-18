/*
 *
 * Main application file
 *
 * Gets data from user and controls the execution
 *
 */

#include "../include/Testing.h"
#include "../include/Messages.h"
#include "../include/Generator.h"

int main(int argc, char *argv[]) {

	int problemSize = Messages::getProblemSize();
	int maxInt = Messages::getMaximumInteger();
	int GAP = Messages::getGap();

	int V[problemSize];
	Testing::generateArray(V, problemSize, maxInt);
	Helper::printArrayContents(V, problemSize);

	bool exitMenu = false;

	while (!exitMenu) {
		char option = Messages::chooseAlgorithm();
		switch (option) {
		case '1':
			Generator::generateInsertionSortDataFile(problemSize, V, GAP);
			break;

		case '2':
			Generator::generateSelectionSortDataFile(problemSize, V, GAP);
			break;

		case '3':
			Generator::generateBubbleSortDataFile(problemSize, V, GAP);
			break;

		case '4':
			Generator::generateQuickSortDataFile(problemSize, V, GAP);
			break;

		case '5':
			Generator::generateMergeSortDataFile(problemSize, V, GAP);
			break;

		case '6': {
			Generator::generateAllFiles(problemSize, V, GAP);
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
