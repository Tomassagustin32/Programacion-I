#include <stdio.h>
#include <stdlib.h>
#define T 2

int main()
{
    //vectores paralelos

    int legajos[T];
    char nombres[T][21];
    int notas[T];
    float alturas[T];
    int i;

    for(i=0; i<T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);
        printf("Ingrese notas: ");
        scanf("%d", &notas[i]);
        printf("Ingrese alturas: ");
        scanf("%f", &alturas[i]);
    }

    printf("%4s %15s %2s %5s\n","Legajo","Nombre","Nota","Altura");
    for(i=0; i<T; i++)
    {
        printf("%4d     %15s     %2d     %5f\n", legajos[i], nombres[i], notas[i], alturas[i]);
    }







    return 0;
}
