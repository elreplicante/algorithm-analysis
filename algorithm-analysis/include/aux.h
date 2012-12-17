/*
 * Auxiliary functions
 */

#include <cstdlib>
#include <iostream>
#include "../include/ordenacion.h"
#include <fstream>
#include <iomanip>
using namespace std;

#ifndef AUX_H_
#define AUX_H_

/**
 * @brief Creates a random integer array between 0 and MaxInteger
 * @param V an array already set to a length of arrayLength
 * @param arrayLength the array's length
 * @param maxInteger the maximum integer to generate
 */
void createRandomArray(int V[], int arrayLength, int maxInteger);

/**
 * @brief Copies an array contents into another array with the same length
 * @param V the original array
 * @param W the cloned array
 * @param n the array's length
 */
void copyArray(int V[], int W[], int n);

/**
 * @brief Checks equality between two given arrays (both arrays have same content in same order)
 * @param V the original array
 * @param W the other array
 * @param n the array's length
 */
bool checkArrayEquality(int V[], int W[], int n);

/**
 * @brief Checks if an array is ordered
 * @param V the array
 * @param n the array's length
 */
bool checkIsOrdered(int V[], int n);


/**
 * @brief Prints array content on console
 * @param V the array
 * @param n the array's length
 */
void printArrayContents(int V[], int n);

#endif /* AUX_H_ */
