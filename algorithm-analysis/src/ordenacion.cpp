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

void merge(int *a, int *b, int low, int pivot, int high) {
	int h, i, j, k;
	h = low;
	i = low;
	j = pivot + 1;

	while ((h <= pivot) && (j <= high)) {
		if (a[h] <= a[j]) {
			b[i] = a[h];
			h++;
		} else {
			b[i] = a[j];
			j++;
		}
		i++;
	}
	if (h > pivot) {
		for (k = j; k <= high; k++) {
			b[i] = a[k];
			i++;
		}
	} else {
		for (k = h; k <= pivot; k++) {
			b[i] = a[k];
			i++;
		}
	}
	for (k = low; k <= high; k++)
		a[k] = b[k];
}




