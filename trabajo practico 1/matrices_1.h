#ifndef matrices_1 
#define matrices_1
#define DIM 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int inicializadora_de_martrices(int m_1[DIM][DIM],int dim);
int mostrar_matriz(int m_1[DIM][DIM],int dim);
int suma_de_martrices(int m_1[DIM][DIM], int dim_1, int m_2[DIM] [DIM],int dim_2, int m_3[DIM][DIM], int dim_3);
int multiplicar_por_una_cte_las_martrices(int m_1[DIM][DIM],int dim, int m_2[DIM][DIM], int dim_2);
int trasponer_matriz(int m_1[DIM][DIM],int dim,  int m_2[DIM][DIM], int dim_2);
int multiplicar_matrices(int m_1[DIM][DIM],int dim_1, int m_2[DIM][DIM],int dim_2, int m_3[DIM][DIM], int dim_3);
#endif