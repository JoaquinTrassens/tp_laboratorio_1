/*
 ============================================================================
 Name        : Trabajo Practico Numero 1 (CALCULADORA)
 Author      : Joaquin Trassens
 Version     :
 Copyright   : Your copyright notice
 Description : El programa consiste en una calculadora que devuelve el resultado de sumar,
 restar, dividir, multiplicar y calcular el factorial de dos operandos.
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
    long int resultadoFactorial;
    long int resultadoFactorial2;
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
            printf("calcular la division de %d/%d\n",numero,numero2);
            printf("calcular la multiplicacion de %d*%d\n",numero,numero2);
            printf("calcular el factorial de %d y %d\n",numero,numero2);
            suma=sumar(numero,numero2);
            resta=restar(numero,numero2);
            division=dividir(numero,numero2);
            multiplicacion=multiplicar(numero,numero2);
            resultadoFactorial=factorial(numero);
            resultadoFactorial2=factorial(numero2);
            break;
        case 4:
            printf("**Informacion de resultados**\n");
            printf("el resultado del %d+%d es: %d\n",numero,numero2,suma);
            printf("el resultado del %d-%d es: %d\n",numero,numero2,resta);
            if(division==-1)
            {
             printf("No se puede dividir por 0\n");
            }else
            {
            printf("el resultado del %d/%d es: %.2f\n",numero,numero2,division);
            }
            printf("el resultado del %d*%d es: %d\n",numero,numero2,multiplicacion);
            printf("el factorial de %d es: %ld\nel factorial de %d es: %ld\n",numero,resultadoFactorial,numero2,resultadoFactorial2);
            break;
        case 5:
            printf("Usted ha seleccionado Salir\n");
            break;
    }
    }while(opcion!=5);

    return 0;
}

