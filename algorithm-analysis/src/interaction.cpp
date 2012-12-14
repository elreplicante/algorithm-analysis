/*
 * interaction.cpp
 *
 *  Created on: 14/12/2012
 *      Author: repli
 */

#include "interaction.h"
#include <iostream>
using namespace std;

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

char chooseAlgorithm() {
	char option;

	cout << "select the algorithm for generating the data which:\n";
	cout << "1: Insertion Sort.\n";
	cout << "2: Selection Sort.\n";
	cout << "2: Bubble Sort.\n";
	cout << "0: Exit.\n";
	cout << "Choose an option:";

	cin >> option;

	return option;
}




