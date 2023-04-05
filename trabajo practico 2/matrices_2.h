#ifndef matrices_2 
#define matrices_2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct matrizT
{
    int dim_f, dim_c;
    int** matriz;
} matrizT;
FILE* abrir_archivo(char* argv);
matrizT procesar_informacion(FILE* adress);
int** inicializadora_de_martrices(matrizT matriz);
int mostrar_matriz(matrizT matriz);
matrizT suma_de_martrices(matrizT matriz_1, matrizT matriz_2, matrizT matriz_3);
matrizT multiplicar_por_una_cte_la_martriz(matrizT matrix, matrizT matriz_3);
void limpiar_matriz(matrizT matrix);
matrizT trasponer_matriz(matrizT matrix, matrizT matrixR);
matrizT multiplicar_matrices(matrizT matriz_1, matrizT matriz_2, matrizT matriz_3);
#endif
