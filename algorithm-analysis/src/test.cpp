/*
 * test.cpp
 *
 *  Created on: 14/12/2012
 *      Author: repli
 */


#include "test.h"

void makeFourCopies(int V[], int first[], int second[], int third[],int fourth[], int n) {
	copyArray(V, first, n);
	copyArray(V, second, n);
	copyArray(V, third, n);
	copyArray(V, fourth, n);
}

void generateArray(int V[], int n, int maxInt) {
	createRandomArray(V, n, maxInt);
}



