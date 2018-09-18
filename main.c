#include <stdio.h>
#include <stdlib.h>
#define T 5
#include <conio.h>

/** \brief busca espacio disponible
 *
 * \param int[] listado de enteros
 * \param int tamañado del listado
 * \param int el valor ilogico
 * \return int [-1] si no hay espacio, [>=0] un indice donde guardar
 *
 */
int buscarLibre(int[], int, int);


int main()
{
    //Crear vector de enteros
    //inicializarlo en -1
    //do-while pidiendo datos
    int vector[T];
    int i;
    int indice;
    char seguir;
    int bandera;
    //conio.h

    for(i=0; i<T; i++)
    {
        if(vector[i] == -1)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &vector[i]);
            bandera++;
            break;
        }
    }
    if(i==T)
    {
        printf("NO HAY MAS LUGAR");
    }

    do
    {
        indice = buscarLibre(vector, T, -1);
        if(indice!=-1)
        {
            printf("Ingrese un dato entero: ");
            scanf("%d", &vector[indice]);
        }else{
            printf("No hay espacio");
            break;
        }


        printf("Desea ingresar otro?");
        seguir = getche();
        fflush(stdin);
    }
    while(seguir='s');

    return 0;
}

int buscarLibre(int numeros[], int tam, int i)
{
    int indice;
    int ilogico;
    for(i=0; i<tam; i++)
    {
        if(numeros[i] == ilogico)
        {
            indice=i;
            break;
        }
    }
    return indice;
}
