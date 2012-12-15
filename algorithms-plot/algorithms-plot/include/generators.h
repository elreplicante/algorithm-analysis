/*
 * Performs generation actions
 *
 * Generates random arrays and creates data files
 *
 */

#ifndef GENERATORS_H_
#define GENERATORS_H_


#include "aux.h"



void generateInsertionSortTime(ofstream &file, int V[], int n);

void generateSelectionSortTime(ofstream &file, int V[], int n);

void generateBubbleSortTime(ofstream &file, int V[], int n);

void generateQuickSortTime(ofstream &file, int V[], int n);

void generateInsertionSortDataFile(int problemSize, int V[], int GAP);

void generateSelectionSortDataFile(int problemSize, int V[], int GAP);

void generateBubbleSortDataFile(int problemSize, int V[], int GAP);

void generateQuickSortDataFile(int problemSize, int V[], int GAP);

void generateAllFiles(int problemSize, int V[], int GAP);

#endif /* GENERATORS_H_ */
