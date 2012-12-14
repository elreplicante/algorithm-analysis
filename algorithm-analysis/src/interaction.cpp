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
	cout << "Enter the maximum integer to generate (-1, of course...):";
	cin >> maxInt;
	return maxInt;
}

int getGap() {
	int gap;
	cout << "Enter the gap between iterations:";
	cin >> gap;
	return gap;
}

char chooseAlgorithm() {
	char option;

	cout << "select the algorithm for generating the data which:\n";
	cout << "1: Insertion Sort.\n";
	cout << "2: Selection Sort.\n";
	cout << "3: Bubble Sort.\n";
	cout << "4: Quick Sort.\n";
	cout << "6: Generate all (DO IT AT YOUR OKWN RISK!.\n";
	cout << "0: Exit.\n";
	cout << "Choose an option:";

	cin >> option;

	return option;
}




