#include <stdio.h>
#include <math.h>
int multiplicacion(int a, int b) {
	return a * b;
}

float division(int a, int b) {
	if (b == 0) {
		printf("Error: División por cero\n");
		return 0.0f;
	}
	return (float)a / b;
}

int multiplicacion_lista(int lista[], int n) {
	int resultado = 1;
	for (int i = 0; i < n; i++) {
		resultado *= lista[i];
	}
	return resultado;
}

float division_lista(int lista[], int n) {
	float resultado = lista[0];
	for (int i = 1; i < n; i++) {
		if (lista[i] == 0) {
			printf("Error: División por cero en la lista\n");
			return 0.0f;
		}
		resultado /= lista[i];
	}
	return resultado;
}
