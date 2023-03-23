#include "matrices_1.h"
int inicializadora_de_martrices(int m_1[DIM][DIM],int dim)
{   
    srand (time(NULL));
    for(int i=0; i<dim; i++)
    {
        for(int j=0; j<dim; j++)
        {
        m_1[i][j]=rand()%dim;
        }
    }
    return 0;
}
int mostrar_matriz(int m_1[DIM][DIM],int dim)
{
    for(int i=0; i<dim; i++)
    {
        printf("[");
        for(int j=0; j<dim; j++)
        {
            printf("%d",m_1[i][j]);
            if(j<dim-1)
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
int suma_de_martrices(int m_1[DIM][DIM], int dim_1, int m_2[DIM][DIM],int dim_2, int m_3[DIM][DIM], int dim_3)
{
     for(int i=0; i<dim_1; i++)
    {
        for(int j=0; j<dim_1; j++)
        {
            m_3[i][j] = m_1[i][j] + m_2[i][j];
        }
    }
    return 0;
}
int multiplicar_por_una_cte_las_martrices(int m_1[DIM][DIM],int dim, int m_2[DIM][DIM], int dim_2)
{
    srand (time(NULL));
    int escalar=rand()%dim;
     for(int i=0; i<dim; i++)
    {
        for(int j=0; j<dim; j++)
        {
            m_2[i][j] = m_1[i][j]*escalar;
        }
    }
    return 0;
}
int trasponer_matriz(int m_1[DIM][DIM],int dim,  int m_2[DIM][DIM], int dim_2)
{
     for(int i=0; i<dim; i++)
    {
        for(int j=0; j<dim; j++)
        {
            m_2[j][i] = m_1[i][j];
        }
    }
    return 0;
}
int multiplicar_matrices(int m_1[DIM][DIM],int dim_1, int m_2[DIM][DIM],int dim_2, int m_3[DIM][DIM], int dim_3)
{

     for(int f=0; f<dim_1; f++)
    {
        for(int c=0; c<dim_1; c++)
        {   
            m_3[f][c]=0;
            for(int x=0; x<dim_1; x++)
            {
                m_3[f][c] = m_3[f][c] + (m_1[f][x]*m_2[x][c]);
            }
        }
    }
    return 0;
}