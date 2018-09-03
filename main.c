#include <stdio.h>
#include <stdlib.h>
int calcularFactorial(int);


int main()
{
    int numero;

    int resultado;

    numero=printf("Ingrese el numero: ");
    scanf("%d", &numero);

    resultado=calcularFactorial(numero);

    printf("\nEl factorial es : %d", resultado);

    return 0;
}

int calcularFactorial(int numero)
{
    int resultado;

    if(numero==0)
    {
        resultado=1;
    }
    else
    {
       resultado=numero * calcularFactorial(numero-1);
    }


    return resultado;
}
/*for(i=numero; i>=1; i--)
    {
        resultado = resultado * i;
    }
 */
