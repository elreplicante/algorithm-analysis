/*
 * Testing.h
 *
 *  Created on: 18/12/2012
 *      Author: repli
 */

#include "../include/Helper.h"

#ifndef TESTING_H_
#define TESTING_H_

class Testing {
public:
	/**
	 * @brief Generates an array with n random integers betwwen 0 and maxInt
	 * @param V the container array with a size of n
	 * @param n The array length
	 * @param maxInt maximum integer to generate arraty to
	 */
	static void generateArray(int V[], int n, int maxInt);

	/**
	 * @brief Makes four copies of a given array
	 * @param V the original array
	 * @param n the array length
	 */
	static void makeFourCopies(int V[], int first[], int second[], int third[], int fourth[], int n);
};

#endif /* TESTING_H_ */
