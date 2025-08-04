#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 4
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

// --- Código principal para pruebas ---
int main() {
	int lista[] = {2, 4, 6, 8};
	int n = sizeof(lista) / sizeof(lista[0]);
	double lista_d[] = {2.0, 4.0, 6.0, 8.0};
	
	double resultado[MAX];  // arreglo de tamaño fijo
	
	printf("Suma 5 + 3 = %d\n", suma(5, 3));
	printf("Resta 10 - 4 = %d\n", resta(10, 4));
	printf("Suma lista = %d\n", suma_lista(lista, n));
	printf("Resta lista = %d\n", resta_lista(lista, n));
	
	printf("Multiplicación 3 * 7 = %d\n", multiplicacion(3, 7));
	printf("División 20 / 4 = %.2f\n", division(20, 4));
	
	printf("Potencia 2^3 = %.2f\n", potencia(2, 3));
	printf("Raíz cuadrada de 16 = %.2f\n", raiz_cuadrada(16));
	
	potencia_lista(lista_d, n, 2, resultado);
	printf("Potencia lista ^ 2 = ");
	for (int i = 0; i < n; i++)
		printf("%.2f ", resultado[i]);
	printf("\n");
	
	raiz_cuadrada_lista(lista_d, n, resultado);
	printf("Raíz cuadrada lista = ");
	for (int i = 0; i < n; i++)
		printf("%.2f ", resultado[i]);
	printf("\n");
	
	printf("Máximo en lista = %d\n", maximo(lista, n));
	printf("Mínimo en lista = %d\n", minimo(lista, n));
	printf("Promedio en lista = %.2f\n", promedio(lista, n));
	printf("Cantidad de pares en lista = %d\n", contar_pares(lista, n));
	
	return 0;
}
