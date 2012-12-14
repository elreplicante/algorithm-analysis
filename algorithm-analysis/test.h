/*
 * test.h
 *
 *  Created on: 14/12/2012
 *      Author: repli
 */
#include "aux.h"
#ifndef TEST_H_
#define TEST_H_




/**
 * @brief Generates an array with n random integers
 * @param n The array length
 */
void generateArray(int V[], int n) {
	createRandomArray(V, n);
}

void makeFourCopies(int V[], int first[], int second[], int third[],int fourth[], int n) {
	copyArray(V, first, n);
	copyArray(V, second, n);
	copyArray(V, third, n);
	copyArray(V, fourth, n);
}

#endif /* TEST_H_ */
