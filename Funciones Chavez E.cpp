#include <stdio.h>
#include <math.h>
int suma(int a, int b) {
	return a + b;
}

int resta(int a, int b) {
	return a - b;
}

int suma_lista(int lista[], int n) {
	int suma_total = 0;
	for (int i = 0; i < n; i++) {
		suma_total += lista[i];
	}
	return suma_total;
}

int resta_lista(int lista[], int n) {
	int resultado = lista[0];
	for (int i = 1; i < n; i++) {
		resultado -= lista[i];
	}
	return resultado;
}
