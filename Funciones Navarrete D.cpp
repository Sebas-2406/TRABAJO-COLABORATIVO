#include <stdio.h>
#include <math.h>
int maximo(int lista[], int n) {
	int max = lista[0];
	for (int i = 1; i < n; i++) {
		if (lista[i] > max) {
			max = lista[i];
		}
	}
	return max;
}

int minimo(int lista[], int n) {
	int min = lista[0];
	for (int i = 1; i < n; i++) {
		if (lista[i] < min) {
			min = lista[i];
		}
	}
	return min;
}

double promedio(int lista[], int n) {
	if (n == 0) return 0.0;
	int suma_total = 0;
	for (int i = 0; i < n; i++) {
		suma_total += lista[i];
	}
	return (double)suma_total / n;
}

int contar_pares(int lista[], int n) {
	int contador = 0;
	for (int i = 0; i < n; i++) {
		if (lista[i] % 2 == 0) {
			contador++;
		}
	}
	return contador;
}

