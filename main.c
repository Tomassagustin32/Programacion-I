#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int x = 10;
    incrementarValor(&x);
    printf("X=%d", x);
    return 0;
}


