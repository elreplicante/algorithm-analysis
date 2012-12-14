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

int main() {

	int problemSize = getProblemSize();
	int maxInt = getMaximumInteger();

	ofstream file("insertion-sort.txt");
	int V[problemSize];
	generateArray(V, problemSize, maxInt);

	for (int i = 100; i < problemSize; i++) {
		int arrayCopy[i];
		copyArray(V, arrayCopy, i);
		generateInsertionSortTime(file, arrayCopy, i);
	}

	file.close();

	return 0;
}
