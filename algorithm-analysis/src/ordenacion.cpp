#include "../include/ordenacion.h"

void insertionSort(int V[], int num) {
	int i, j, x;

	for (i = 1; i < num; i++) {
		x = V[i];
		j = i - 1;
		while ((j >= 0) && (V[j] > x)) {
			V[j + 1] = V[j];
			j = j - 1;
		}
		V[j + 1] = x;
	}
}

void selectionSort(int V[], int num) {
	int i, j, menor, aux;

	for (i = 0; i < num; i++) {
		menor = i;
		for (j = i + 1; j < num; j++)
			if (V[j] < V[menor])
				menor = j;
		if (i != menor) {
			aux = V[i];
			V[i] = V[menor];
			V[menor] = aux;
		}
	}
}

void bubbleSort(int V[], int num) {
	int i, j, aux;
	bool modificado;

	i = 0;
	modificado = true;
	while ((i < num - 1) && modificado) {
		modificado = false;
		for (j = num - 1; j > i; j--)
			if (V[j] < V[j - 1]) {
				aux = V[j];
				V[j] = V[j - 1];
				V[j - 1] = aux;
				modificado = true;
			}
		i++;
	}
}

void quickSort(int V[], int left, int right) {

	int i = left, j = right;
	int tmp;
	int pivot = V[(left + right) / 2];

	/* partition */
	while (i <= j) {
		while (V[i] < pivot)
			i++;
		while (V[j] > pivot)
			j--;
		if (i <= j) {
			tmp = V[i];
			V[i] = V[j];
			V[j] = tmp;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j)
		quickSort(V, left, j);
	if (i < right)
		quickSort(V, i, right);
}

void merge(int V[], int left, int half, int right) {

	int *U = new int[right - left + 1];
	int i, j, k;

	for(k = left; k <= right; k++) {
		U[k - left] = V[k];
	}

	i = 0;
	j = half - left + 1;
	k = left;

	while((i <= half - left) && (j <= right - left)) {
		if(U[i] <= U[j]) {
			V[k] = U[i];
			i++;
		} else {
			V[k] = U[j];
			j++;
		}
		k++;
	}

	while (i <= half - left) {
		V[k] = U[i];
		i++;
		k++;
	}

	while (j <= right - left) {
		V[k] = U[j];
		j++;
		k++;
	}

	delete[] U;
}


void mergeSort(int V[], int left, int right) {
	int half;

	if (left < right) {
		half = (left + right) / 2;
		mergeSort(V, left, half);
		mergeSort(V, half + 1, right);
		merge(V, left, half, right);

	}
}

