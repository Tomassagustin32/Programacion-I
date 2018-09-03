#include "biblioteca.h"
#include <stdio.h>


int pedirEntero(char texto[])
{
    int numero;

    printf("%s", texto);
    scanf("%d", &numero);

    return numero;
}

void incrementarValor(int* y)
{
    (*y)++;
}
