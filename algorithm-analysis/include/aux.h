#include <time.h>
#include <cstdlib>
#include <iostream>
#include "../include/ordenacion.h"
#include <fstream>
#include <iomanip>
using namespace std;

#ifndef AUX_H_
#define AUX_H_


/**
 * @brief Creates a random integer array between 0 and
 */
void createRandomArray(int V[], int arrayLegth, int maxInteger);

void copyArray(int V[], int W[], int n);

bool checkArrayEquality(int V[], int W[], int n);

bool checkIsOrdered(int V[], int n);

void printArrayContents(int V[], int n);



#endif /* AUX_H_ */