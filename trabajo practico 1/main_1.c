#include "main_1.h"
int main()
{
   int suma[DIM][DIM], multiplicacion[DIM][DIM], trans[DIM][DIM], multmat[DIM][DIM];
   int m_1[DIM][DIM], m_2[DIM][DIM];
   inicializadora_de_martrices( m_1, DIM);
   mostrar_matriz( m_1, DIM);
   inicializadora_de_martrices( m_2, DIM);
   mostrar_matriz( m_2, DIM);
   multiplicar_matrices(m_1,DIM,m_2,DIM,multmat,DIM);
   mostrar_matriz( multmat, DIM);
   suma_de_martrices (m_1, DIM, m_2, DIM, suma, DIM);
   mostrar_matriz( suma, DIM);
   multiplicar_por_una_cte_las_martrices (m_1, DIM, multiplicacion, DIM);
   mostrar_matriz( multiplicacion, DIM);
   trasponer_matriz(m_1, DIM, trans,DIM);
   mostrar_matriz( trans, DIM);
   return 0;
}