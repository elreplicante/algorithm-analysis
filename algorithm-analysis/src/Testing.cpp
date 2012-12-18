/*
 * Testing.cpp
 *
 *  Created on: 18/12/2012
 *      Author: repli
 */

#include "../include/Testing.h"

void Testing::makeFourCopies(int V[], int first[], int second[], int third[],int fourth[], int n) {
	Helper::copyArray(V, first, n);
	Helper::copyArray(V, second, n);
	Helper::copyArray(V, third, n);
	Helper::copyArray(V, fourth, n);
}

void Testing::generateArray(int V[], int n, int maxInt) {
	Helper::createRandomArray(V, n, maxInt);
}
