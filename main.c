#include <stdio.h>
#include <stdlib.h>

//#define T 10 (REEMPLAZA EN T EL NUMERO 10)

int main()
{
    int vector [5];

    /*vector[2]=9;

    printf("%d", vector[2]);
*/
    //PARA QUE EL VECTOR MUESTRE LAs DIRECCIONES DEBEMOS USAR PRINTF("%d", vector)
    //SIEMPRE i=0 y TERMINA CON UN NUMERO MENOR AL LIMITE

    int i;
    for(i=0; i<5 ; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
//PARA MOSTRAR LOS NUMEROS PARES
    printf("\nTodos los numeros: \n");
    for(i=0; i<5 ; i++)
    {
        printf("%d\n", vector[i]);
    }
    printf("\nTodos los numeros pares: \n");
    for(i=0; i<5 ; i++)
    {
        if(vector[i]%2==0)
        {
            printf("%d\n", vector[i]);
        }

    }
//COMO DEFINIR UN VECTOR POR EXTENSION?
/*  int vector[T] = {1,2,3,4};
    int i;
    LO QUE NO PODMOS HACER ES:
    int vector[T];
    vector={1,2,3,4}
    int i; NOoOoO
    */
    return 0;
}
