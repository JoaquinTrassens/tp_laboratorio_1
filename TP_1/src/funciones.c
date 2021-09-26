/*
 * funciones.c
 *
 *  Created on: 24 sep. 2021
 *      Author: Joaquin
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int sumar(int primerOperando, int segundoOperando)
{
    int resultado=primerOperando+segundoOperando;
    return resultado;
}
int restar(int primerOperando, int segundoOperando)
{
    int resultado=primerOperando-segundoOperando;
    return resultado;
}

int dividir(int primerOperando, int segundoOperando)
{
    int resultado;
    resultado=primerOperando/segundoOperando;
    if(segundoOperando==0)
    {
    	return printf("no es posible dividir por 0");
    }
    return resultado;
}

int multiplicar(int primerOperando, int segundoOperando)
{
    int resultado=primerOperando*segundoOperando;
    return resultado;
}


