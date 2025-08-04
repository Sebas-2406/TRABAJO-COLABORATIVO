#include <stdio.h>
#include <math.h>
double potencia(double base, double exponente) {
	return pow(base, exponente);
}

double raiz_cuadrada(double num) {
	if (num < 0) {
		printf("Error: Número negativo\n");
		return -1;
	}
	return sqrt(num);
}

void potencia_lista(double lista[], int n, double exponente, double resultado[]) {
	for (int i = 0; i < n; i++) {
		resultado[i] = pow(lista[i], exponente);
	}
}

void raiz_cuadrada_lista(double lista[], int n, double resultado[]) {
	for (int i = 0; i < n; i++) {
		if (lista[i] < 0) {
			printf("Error: Número negativo en lista índice %d\n", i);
			resultado[i] = -1;
		} else {
			resultado[i] = sqrt(lista[i]);
		}
	}
}
