/*
 * Messages.cpp
 *
 *  Created on: 18/12/2012
 *      Author: repli
 */

#include "../include/Messages.h"


#include <iostream>
using namespace std;

int Messages::getProblemSize() {
	int problemSize;
	cout << "Enter the problem size (array length):";
	cin >> problemSize;
	return problemSize;
}

int Messages::getMaximumInteger() {
	int maxInt;
	cout << "Enter the maximum integer to generate:";
	cin >> maxInt;
	return maxInt;
}

int Messages::getGap() {
	int gap;
	cout << "Enter the gap between iterations:";
	cin >> gap;
	return gap;
}

char Messages::chooseAlgorithm() {
	char option;

	cout << "select the algorithm for generating the data which:\n";
	cout << "1: Insertion Sort.\n";
	cout << "2: Selection Sort.\n";
	cout << "3: Bubble Sort.\n";
	cout << "4: Quick Sort.\n";
	cout << "5: Merge Sort.\n";
	cout << "6: Generate all (DO IT AT YOUR OKWN RISK!.\n";
	cout << "0: Exit.\n";
	cout << "Choose an option:";

	cin >> option;

	return option;
}


