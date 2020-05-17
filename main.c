/* 
 * File:   main.c
 * Author: axel
 *
 * Created on 14 de mayo de 2020, 16:10
 */

#include <stdio.h>
#include <stdlib.h>
#include "suma_digitos.h"

/*
 * 
 */
int main(void) 
{
    int example=233;
    printf("La suma de los digitos de %d es = %d",example,suma_digitos(example));
    return (EXIT_SUCCESS);
}

