#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void printArrayPuntero(int* array, int tam);
void printArrayPunteroDos(int* array, int tam);
void cargarEnteros(int* array, int tam);
void mostrarEnteros(int* array, int tam);
int getInt(char mensaje[]);
void ordenarEnteros(int* array, int tam);
void calcularMaximo(int* array, int tam);
void calcularPromedio(int* array, int tam);

//ORDENAR; CALCULAR MAXIMO; DEVOLVER PROMEDIO
int main()
{
    int* puntero;
    int array[TAM]; // = {5,9,7,8,1};
    puntero = array;
    cargarEnteros(puntero, TAM);
    ordenarEnteros(puntero, TAM);
    mostrarEnteros(puntero, TAM);
    calcularMaximo(puntero, 1);
    calcularPromedio(puntero, TAM);
    return 0;
}


/*void printArrayPuntero(int* array, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d", array[i]);
        printf("\r\n");

    }
}
void printArrayPunteroDos(int* array, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d", *(array+i));
        printf("\r\n");
    }
}
*/

int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s", mensaje);
    scanf("%d", &auxiliar);
    return auxiliar;
}

void cargarEnteros(int* array, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese un entero: ");
        fflush(stdin);
        scanf("%d", array+i);
    }
}

void mostrarEnteros(int* array, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d", array[i]);
        printf("\n\n");
    }
}

void ordenarEnteros(int* array, int tam)
{
    int i;
    int j;
    int aux;
    for(i=0; i<tam; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(array[j]>array[i])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }

        }
    }
}

void calcularMaximo(int* array, int tam)
{
    int i;
    int auxMayor=0;
    for(i=0; i<tam; i++)
    {
            if(array[i] > auxMayor)
            {
                auxMayor = array[i];
                printf("\nEl numero mayor es: %d", auxMayor);
            }


    }
}

void calcularPromedio(int* array, int tam)
{
    int promedio=0;
    int suma=0;
    int i;
    for(i=0; i<tam; i++)
    {
        suma = suma + array[i];
        promedio = suma / 5;

    }
    printf("\nLa suma es: %d", suma);

    printf("\nEl promedio es: %d", promedio);
}
