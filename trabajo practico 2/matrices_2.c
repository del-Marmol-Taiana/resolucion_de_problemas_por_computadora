#include "matrices_2.h"
FILE* abrir_archivo(char* argv)
{
    FILE* fptr;
    fptr=fopen(argv,"r");
    if(fptr==NULL)
    {
        printf("Me estoy prendiendo fuego AYUDA.");
        exit(-1);
    }
    return fptr;
}

matrizT procesar_informacion(FILE* adress)
{
    matrizT matrix;
    fscanf(adress,"%d %d",&matrix.dim_f,&matrix.dim_c);
    matrix.matriz = calloc(matrix.dim_f, sizeof(int*));
    for(int i=0; i<matrix.dim_f; i++)
    {
        matrix.matriz[i] = calloc(matrix.dim_c, sizeof(int));
    }
    calloc(matrix.dim_c, sizeof(int*));
    for(int i=0; i<matrix.dim_f; i++)
    {
        for(int j=0; j<matrix.dim_c; j++)
        {
            fscanf(adress,"%d", &matrix.matriz [i][j]);
        }
    }
    return matrix;
}



/*

void procesar_informacion(matrizT* matrix, FILE* adress)
{
    fscanf(adress,"%d %d",&(*matrix).dim_f,&(*matrix).dim_c);
    matrix->matriz = calloc(matrix->dim_f, sizeof(int*));
    for(int i=0; i<matrix->dim_f; i++)
    {
        matrix->matriz[i] = calloc(matrix->dim_c, sizeof(int));
    }
    calloc(matrix->dim_c, sizeof(int*));
    for(int i=0; i<matrix->dim_f; i++)
    {
        for(int j=0; j<matrix->dim_c; j++)
        {
            fscanf(adress,"%d", &matrix->matriz [i][j]);
        }
    }
}


int** inicializadora_de_martrices(matrizT matriz)
{   
    matriz.matriz = calloc(matriz.dim_f, sizeof(int*));
    for(int i=0; i<matriz.dim_f; i++)
    {
        matriz.matriz[i] = calloc(matriz.dim_c, sizeof(int));
    }
    calloc(matriz.dim_c, sizeof(int*));
    
    srand (time(NULL));
    for(int i=0; i<matriz.dim_f; i++)
    {
        for(int j=0; j<matriz.dim_c; j++)
        {
            //(*(*matriz+i)+j)
            matriz.matriz[i][j]=rand()%10;
        }
    }
    return matriz.matriz;
}
*/
int mostrar_matriz(matrizT matriz)
{
    for(int i=0; i<matriz.dim_f; i++)
    {
        printf("[");
        for(int j=0; j<matriz.dim_c; j++)
        {
            printf("%d",matriz.matriz[i][j]);
            if(j<matriz.dim_c-1)
            {
                printf("\t");
            }
        }
        printf("]");
        printf("\n");
    }
    printf("\n");
    return 0;
}
struct matrizT suma_de_martrices(matrizT matriz_1, matrizT matriz_2, matrizT matriz_3)
{
    if((matriz_1.dim_c==matriz_2.dim_c)&&(matriz_1.dim_f==matriz_2.dim_f))
    {
        matriz_3.dim_f=matriz_1.dim_f;
        matriz_3.dim_c=matriz_1.dim_c;
        matriz_3.matriz = calloc(matriz_3.dim_f, sizeof(int*));
        for(int i=0; i<matriz_3.dim_f; i++)
        {
            matriz_3.matriz[i] = calloc(matriz_3.dim_c, sizeof(int));
        }
        for(int filas=0; filas<matriz_1.dim_f; filas++)
        {
            for(int columnas=0; columnas<matriz_1.dim_c; columnas++)
            {
                matriz_3.matriz[filas][columnas] = matriz_1.matriz[filas][columnas] + matriz_2.matriz[filas][columnas];
            }
         }
    }
    else 
    {
        printf("el tamaño de las matrices no es compatible");
    }
    return matriz_3;
}
struct matrizT multiplicar_por_una_cte_la_martriz(matrizT matrix, matrizT matriz_3)
{
    matriz_3.dim_f=matrix.dim_f;
    matriz_3.dim_c=matrix.dim_c;
    matriz_3.matriz = calloc(matriz_3.dim_f, sizeof(int*));
    for(int i=0; i<matriz_3.dim_f; i++)
        {
            matriz_3.matriz[i] = calloc(matriz_3.dim_c, sizeof(int));
        }
    srand (time(NULL));
    //int escalar=10;
    int escalar=rand()%5;
    for(int filas=0; filas<matrix.dim_f; filas++)
    {
        for(int columnas=0; columnas<matrix.dim_c; columnas++)
        {
            matriz_3.matriz[filas][columnas] = matrix.matriz[filas][columnas]*escalar;
        }
    } 
    return matriz_3;
}
void limpiar_matriz(matrizT matrix)
{
    for(int i=0; i<matrix.dim_f; i++)
    {
        free(matrix.matriz[i]);
    }
    free(matrix.matriz);
    return;
}
struct matrizT trasponer_matriz(matrizT matrix, matrizT matrixR)
{
    matrixR.dim_f=matrix.dim_f;
    matrixR.dim_c=matrix.dim_c;
    matrixR.matriz = calloc(matrixR.dim_f, sizeof(int*));
    for(int i=0; i<matrixR.dim_f; i++)
        {
            matrixR.matriz[i] = calloc(matrixR.dim_c, sizeof(int));
        }
    for(int filas=0; filas<matrixR.dim_f; filas++)
    {
         for(int columnas=0; columnas<matrixR.dim_c; columnas++)
        {
            matrixR.matriz[filas][columnas] = matrix.matriz[columnas][filas];
        }
    }
    return matrixR;
}
struct matrizT multiplicar_matrices(matrizT matriz_1, matrizT matriz_2, matrizT matriz_3)
{
    if((matriz_1.dim_c==matriz_2.dim_c)&&(matriz_1.dim_f==matriz_2.dim_f))
    {
        matriz_3.dim_f=matriz_1.dim_f;
        matriz_3.dim_c=matriz_1.dim_c;
        matriz_3.matriz = calloc(matriz_3.dim_f, sizeof(int*));
        for(int i=0; i<matriz_3.dim_f; i++)
        {
            matriz_3.matriz[i] = calloc(matriz_3.dim_c, sizeof(int));
        }
        for(int filas=0; filas<matriz_1.dim_f; filas++)
        {
            for(int columnas=0; columnas<matriz_1.dim_c; columnas++)
            {
                for(int x=0; x<matriz_1.dim_f; x++)
                {
                   matriz_3.matriz[filas][columnas] = matriz_3.matriz[filas][columnas] + (matriz_1.matriz[filas][x]*matriz_2.matriz[x][columnas]);
                }
            }
        }
    }
     else 
    {
        printf("el tamaño de las matrices no es compatible");
    }
    return matriz_3;
}

