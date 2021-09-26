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



float dividir(int primerOperando, int segundoOperando)
{
    float resultado;
    if(segundoOperando==0)
    {
    	return -1;
    }else{
    resultado=(float)(primerOperando/segundoOperando);
    }
    return resultado;
}

int multiplicar(int primerOperando, int segundoOperando)
{
    int resultado=primerOperando*segundoOperando;
    return resultado;
}

