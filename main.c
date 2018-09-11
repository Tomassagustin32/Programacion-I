#include <stdio.h>
#include <stdlib.h>
#define T 2

void cargarAlumnos(int[], char[][21], int[], float[], int);
void mostrarAlumnos(int[], char[][21], int[], float[], int);

//funcion: que ordene por nombre A-Z
//funcion: alumnos aprobados con nota>6
//funcion: alumnos que se llaman Juan
//funcion: alumnos cuyo nombre comienza con P
//funcion: alumno con mas nota(sabiendo qe puede ser mas de uno)
//funcion: alumno mas mediocre legajo=100 nota=5 se llama pepe y mide 1.75
//funcion: ingresar un legajo y permitir la modificacion de la nota
//TRANSOFRMAR LA CARGA DE DATOS EN UNA CARGA ALEATORIA
//TODO EN MENU D OPCIONES

int main()
{
    //vectores paralelos

    int legajos[T];
    char nombres[T][21];
    int notas[T];
    float alturas[T];
    char mail[T][50];
    int i;

    cargarAlumnos(legajos, nombres, notas, alturas, T);
    mostrarAlumnos(legajos, nombres, notas, alturas, T);


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

void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float alturas[], int T);
{

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
}
