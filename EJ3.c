#include <stdio.h>

#define SIZE 5

int findLargestLine(int matrix[][SIZE]) {
    int resultadoFinal = 0;
    int n = SIZE;
    for (int k = 0; k < n; k++) { /*Como ya este no es un recorrido solo de la diagonal principal y secundaria tuve que 
                                   definir esta variable K para podee recorrer todas las diagonales, ya que esta nos da la nocion
				   de donde inicia pues al ser i=k inicia en (0,k) y ahi va recorriendo a segun que valores de k se                                    pongan*/
        int sumauno = 0;
        for (int i = 0, j = k; j < n; i++, j++) {
            if (matrix[i][j] == 1) {
                sumauno++;
                if (sumauno > resultadoFinal) resultadoFinal = sumauno; /*Aqui se valida que suma uno sea mayor a lo que ya se 
		                                                          Habia encontrado en diagonales pasadas y si no lo cumple
									  lo manda a 0 con el else*/
            } else {
                sumauno = 0; 
            }
        }
    }

    for (int k = 1; k < n; k++) {  /*Estios demas recorridos son similares al primero pero asifnado k de maneras distintas
                                     pues en el primero i=o y en este i=k, sin embargo uno se usan para las diagonales de manera dis                                     tinta pues  todos recorren la matriz de forma distinta para cubrir todas las diagonales*/
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

    return resultadoFinal; /*Despues de haber hecho las respectivas comparaciones se escoje el resultado mas grande*/
}

int main() {
    int matrix[SIZE][SIZE] = {
        {0, 1, 1, 1, 0}, 
        {0, 1, 1, 1, 1}, 
        {1, 1, 1, 1, 0},
        {0, 1, 1, 0, 1},
        {1, 0, 1, 0, 1}
    };

    int largestLine = findLargestLine(matrix);
    printf("El tamaño de la secuencia de 1s más grande en una diagonal es: %d\n", largestLine);

    return 0;
}

