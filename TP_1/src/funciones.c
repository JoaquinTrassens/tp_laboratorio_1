/*
 * funciones.c
 * aqui se encuentra el desarrollo de todas las funciones para las operaciones de la calculadora
 *  Created on: 24 sep. 2021
 *      Author: Joaquin
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int sumar(int primerOperando, int segundoOperando) //funcion de sumar
{
    int resultado=primerOperando+segundoOperando;
    return resultado;
}

int restar(int primerOperando, int segundoOperando)// funcion de restar
{
    int resultado=primerOperando-segundoOperando;
    return resultado;
}

float dividir(int primerOperando, int segundoOperando)// funcion de dividir
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

int multiplicar(int primerOperando, int segundoOperando)//funcion multiplicar
{
    int resultado=primerOperando*segundoOperando;
    return resultado;
}

int factorial(int numero)//funcion para calcular el factorial
{
	unsigned long long int fact;
		if(numero == 0 || numero == 1){
			fact = 1;
		}
		else{
			fact = numero * factorial(numero - 1);
		}
	return fact;
}
