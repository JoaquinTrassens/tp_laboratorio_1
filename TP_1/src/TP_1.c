/*
 ============================================================================
 Name        : Trabajo Practico Numero 1 (CALCULADORA)
 Author      : Joaquin Trassens
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    setbuf(stdout, NULL);
    int opcion;
    int numero;
    int numero2;
    int suma;
    int resta;
    float division;
    int multiplicacion;
    do{
    printf("\t MENU DE OPCIONES \n");
    printf(" 1. Ingresar 1er operando\n 2. Ingresar 2do operando\n 3. Calcular todas las operaciones\n 4. Informar resultados\n 5. Salir\n");
    scanf("%d",&opcion);
    switch(opcion)
    {
        case 1:
            printf("Ingresar 1er operando: ");
            scanf("%d",&numero);
            break;
        case 2:
            printf("Ingresar 2do operando: ");
            scanf("%d",&numero2);
            break;
        case 3:
            printf("**OPERACIONES**\n");
            printf("calcular la suma de %d+%d\n",numero,numero2);
            printf("calcular la resta de %d-%d\n",numero,numero2);
            printf("calcular la division de %f/%f\n",numero,numero2);
            printf("calcular la multiplicacion de %d*%d\n",numero,numero2);
            suma=sumar(numero,numero2);
            resta=restar(numero,numero2);
            division=dividir(numero,numero2);
            multiplicacion=multiplicar(numero,numero2);
            break;
        case 4:
            printf("**Informacion de resultados**\n");
            printf("el resultado del %d+%d es: %d\n",numero,numero2,suma);
            printf("el resultado del %d-%d es: %d\n",numero,numero2,resta);
            if(division==-1)
            {
             printf("No se puede dividir por 0");
            }
            printf("el resultado del %f/%f es: %f\n",numero,numero2,division);
            printf("el resultado del %d*%d es: %d\n",numero,numero2,multiplicacion);
            break;
        case 5:
            printf("Usted ha seleccionado Salir\n");
            break;
    }
    }while(opcion!=5);

    return 0;
}

