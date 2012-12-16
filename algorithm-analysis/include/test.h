/*
 * test.h
 *
 *  Created on: 14/12/2012
 *      Author: repli
 */
#include "../include/aux.h"
#ifndef TEST_H_
#define TEST_H_




/**
 * @brief Generates an array with n random integers betwwen 0 and maxInt
 * @param V the container array with a size of n
 * @param n The array length
 * @param maxInt maximum integer to generate arraty to
 */
void generateArray(int V[], int n, int maxInt);


/**
 * @brief Makes four copies of a given array
 * @param V the original array
 * @param n the array length
 */
void makeFourCopies(int V[], int first[], int second[], int third[], int fourth[], int n);

#endif /* TEST_H_ */
