#include <stdio.h>
#include <stdlib.h> /*Estos dos nuevos headers son los que me permitiran usar la funcion rand para generar la matriz*/
#include <time.h>
#define SIZE 5

int findLargestLine(int matrix[][SIZE]) {    /*Todo este codigo se conserva de la primera parte del ejerccicio*/
    int resultadoFinal = 0;
    int n = SIZE;
    for (int k = 0; k < n; k++) { 
        int sumauno = 0;
        for (int i = 0, j = k; j < n; i++, j++) {
            if (matrix[i][j] == 1) {
                sumauno++;
                if (sumauno > resultadoFinal) resultadoFinal = sumauno; 
            } else {
                sumauno = 0; 
            }
        }
    }

    for (int k = 1; k < n; k++) {  
        int sumauno = 0;
        for (int i = k, j = 0; i < n; i++, j++) {
            if (matrix[i][j] == 1) {
                sumauno++;
                if (sumauno > resultadoFinal) resultadoFinal = sumauno;
            } else {
                sumauno = 0;
            }
        }
    }

  
    for (int k = 0; k < n; k++) {
        int sumados = 0;
        for (int i = 0, j = k; j >= 0 && i < n; i++, j--) {
            if (matrix[i][j] == 1) {
                sumados++;
                if (sumados > resultadoFinal) resultadoFinal = sumados;
            } else {
                sumados = 0;
            }
        }
    }

    for (int k = 1; k < n; k++) {
        int sumados = 0;
        for (int i = k, j = n - 1; i < n && j >= 0; i++, j--) {
            if (matrix[i][j] == 1) {
                sumados++;
                if (sumados > resultadoFinal) resultadoFinal = sumados;
            } else {
                sumados = 0;
            }
        }
    }

    return resultadoFinal; 
}

int main() {
	int matrix[SIZE][SIZE];
	srand(time(NULL)); /*con esta linea inicializo la matriz para que cambie de valores segun el tiempo en el que se ejecuta*/
	for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {     /*Aqui se aplicaron los recorridos usados desde el ejercicio 1 */
                        matrix[i][j] = rand() % 2;/*aqui se hace la operacion modulo dos para llenar la mtriz con los restos 0 o 1*/
                }
        }
	printf("La matriz utiilizada corresponde a:\n"); /*esta forma de imprimir se obtuvo de las presentaciones*/
        for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                        printf("%d ", matrix[i][j]);
                 }
        printf("\n"); /*Con esto dejamos espacios entre las filas de la matriz para que que quede como en el enunciado*/
        }

	int largestLine = findLargestLine(matrix);
	printf("El tamano de la secuencia de 1s mas grande es %d\n", largestLine);

	return 0;
}




