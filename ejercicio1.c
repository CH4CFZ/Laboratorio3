#include <stdio.h>
/* voy a tres matrices, una de 2x2 otra 3x3 y la ultima 4x4 ya que el enunciado pide 3 ejemplos */

int main() {

	int matrizA[2][2];  
	                        /*Aqui voy a definir los valores de las celdas de la matriz al azar */
        matrizA[0][0] = 3;
        matrizA[1][1] = 1;
        matrizA[0][1] = 0;
        matrizA[1][0] = 2;
                   /*** 
        int matrizB[3][3];

	matrizB[0][0] = 3;
        matrizB[1][1] = 1;
        matrizB[0][1] = 0;      
        matrizB[1][0] = 2;
	matrizB[0][2] = 4;
        matrizB[1][2] = 5;
	matrizB[2][0] = 0; Estas matrices se archivaron pues solo se usaron para ejemplificar en el reporte
	matrizB[2][1] = 9;
	matrizB[2][2] = 5;
                                   
        int matrizC[4][4];

	matrizC[0][0] = 3;
        matrizC[1][1] = 1;
        matrizC[0][1] = 0;
        matrizC[1][0] = 2;
        matrizC[0][2] = 4;
        matrizC[1][2] = 5;
        matrizC[2][0] = 0;
        matrizC[2][1] = 9;
        matrizC[2][2] = 5;
	matrizC[0][3] = 1;
	matrizC[1][3] = 2;
	matrizC[2][3] = 4;
	matrizC[3][0] = 1;
        matrizC[3][1] = 2;
        matrizC[3][2] = 1;
        matrizC[3][3] = 3;
	***/
  
	int n = 2; /*Aqui defini el tamano de la matriz por lo que se puede ajustar segun lo que se requiera */
	int sumauno = 0; 
	int sumados = 0;

        for (int i = 0; i < n; i++) {   /*Estos ciclos for para recorrer la matriz los obtuve de las presentaciones*/
                for (int j = 0; j < n; j++) {
	
	                if (i==j) {  /*Esta es la condicion basica de una diagonal principal para una matriz nxn*/
				
		                sumauno += matrizA[i][j]; /*Esta forma de sumar se obtuvo de las presentaciones pero lo modifique*/
	                }
	                if ( i + j == n - 1) { /*Esto agarra la otra diagonal la obtuve al asignar valores en pseudocodigo*/
	                 	sumados += matrizA[i][j];
	                }

		}
	}

	printf("La suma de las diagonales de la matriz es: %d\n", sumauno + sumados );
	
	return 0;
	
}

		






