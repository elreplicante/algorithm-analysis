/*
 * generators.h
 *
 *  Created on: 14/12/2012
 *      Author: repli
 */

#ifndef GENERATORS_H_
#define GENERATORS_H_


#include "aux.h"

void generateInsertionSortTime(ofstream &file, int V[], int n);

void generateSelectionSortTime(ofstream &file, int V[], int n);

void generateBubbleSortTime(ofstream &file, int V[], int n);

void generateInsertionSortDataFile(int problemSize, int V[]);

void generateSelectionSortDataFile(int problemSize, int V[]);

void generateBubbleSortDataFile(int problemSize, int V[]);


#endif /* GENERATORS_H_ */