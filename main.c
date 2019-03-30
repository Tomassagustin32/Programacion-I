#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaTomas.h"

int main()
{
    int numeroOculto;
    int numeroIngresado;
    char teclaIngresada;
    int jugar;

    teclaIngresada = 's' ;
    while(teclaIngresada == 's')
    {
        numeroOculto = getNumeroAleatorio(1,100,1);

        jugar = 1;
        while(jugar == 1)
        {
            numeroIngresado = getInt("Ingrese un numero (0-99)\n");
            if(numeroIngresado < 0)
            {
                jugar = 0;
            }
            else if(numeroIngresado == numeroOculto)
            {
                printf("FELICITACIONES GANASTE!\n");
                jugar = 0;
            }
            else if(numeroIngresado > numeroOculto)
            {
                printf("EL NUMERO QUE INGRESASTE ES GRANDE!\n");
            }
            else if(numeroIngresado < numeroOculto)
            {
                printf("EL NUMERO QUE INGRESASTE ES CHICO!\n");
            }

        }
        teclaIngresada = getChar("Desea seguir jugando? (s/n)\n");
    }
    return 0;
}
