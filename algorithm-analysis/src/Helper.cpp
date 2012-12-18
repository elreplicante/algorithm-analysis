/*
 * Helper.cpp
 *
 *  Created on: 18/12/2012
 *      Author: repli
 */

#include "../include/Helper.h"

void Helper::createRandomArray(int V[], int n, int maxInteger) {
	srand((unsigned int) time(NULL));
	for (int i = 0; i < n; i++) {
		V[i] = rand() % maxInteger;
	}
}

void Helper::copyArray(int V[], int W[], int n) {
	for (int i = 0; i < n; i++) {
		W[i] = V[i];
	}
}

bool Helper::checkSameLength(int V[], int W[]) {
	int vElements = sizeof(V) / sizeof(int);
	int wElements = sizeof(W) / sizeof(int);

	return vElements == wElements;
}

bool Helper::checkArrayEquality(int V[], int W[], int n) {
	bool equals;
	if (!Helper::checkSameLength(V, W)) {
		equals = false;
	} else {
		int i = 0;
		while (V[i] == W[i] && i < n) {
			i++;
		}

		if (i == n - 1) {
			equals = true;
		} else {
			equals = false;
		}
	}

	return equals;
}

bool Helper::checkIsOrdered(int V[], int n) {
	bool ordered;
	int i = n - 1;
	while (i > 0 && V[i] >= V[i - 1]) {
		i--;
	}

	if (i == 0) {
		ordered = true;
	} else {
		ordered = false;
	}

	return ordered;
}

void Helper::printArrayContents(int V[], int n) {

	for (int i = 0; i < n; i++) {
		cout << V[i] << " ";
		if (i % 8 == 0) {
			cout << '\n';
		}
	}

	cout << endl << endl;

}

void Helper::executePlotCommand() {
		int i;
			  printf ("Checking if processor is available...");
			  if (system(NULL)) puts ("Ok");
			    else exit (1);
			  printf ("Executing command generate-plots.sh...\n");
			  i=system ("generate-plots.sh");
			  printf ("The value returned was: %d.\n",i);
	}

