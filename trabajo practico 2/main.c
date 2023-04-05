#include "main.h"
int main(int argc,char* argv[],char* envp[])
{
   matrizT one; 
    matrizT two;
    matrizT three;
    FILE* direccion_1;
    FILE* direccion_2;
    FILE* direccion_3;
    direccion_1=abrir_archivo (argv[1]);
    direccion_2=abrir_archivo (argv[2]);
    one=procesar_informacion(direccion_1);
    two=procesar_informacion(direccion_2);
    /*
    printf("ingrese una filas");
    scanf("%d",&one.dim_f);
    printf("ingrese una columnas");
    scanf("%d",&one.dim_c);  
    printf("ingrese una filas");
    scanf("%d",&two.dim_f);
    printf("ingrese una columnas");
    scanf("%d",&two.dim_c);
    */
    /*one.matriz=inicializadora_de_martrices(one);
    two.matriz=inicializadora_de_martrices(two);
    */
    mostrar_matriz(one);
    mostrar_matriz(two);
    three=suma_de_martrices(one, two, three);
    mostrar_matriz(three);
    limpiar_matriz(three);
    three=multiplicar_por_una_cte_la_martriz(one, three);
    mostrar_matriz(three);
    limpiar_matriz(three);
    three=multiplicar_por_una_cte_la_martriz(two, three);
    mostrar_matriz(three);
    limpiar_matriz(three); 
    three=trasponer_matriz(one, three);
    mostrar_matriz(three);
    limpiar_matriz(three);
    three=trasponer_matriz(two, three);
    mostrar_matriz(three);
    limpiar_matriz(three);
    three=multiplicar_matrices(one, two, three);
    mostrar_matriz(three);
    limpiar_matriz(three);
    return 0;

 /*  3   3           5   2

    1   2   2       1   2
    4   5   7       2   2
    4   7   8       1   1
                    5   4
                    7   8
                    */ 
}