#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  /*
    char cadena1[10];
    char cadena2[100]="Hola como estas?";

    strncpy(cadena1, cadena2, 4);

    puts(cadena1);
    funcion atoi=parse int
    isdigit recibe un caracter y dice si es numero o no

*/
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41];
    char buffer[1024];
    int i;

    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>19)
    {
        printf("Error. Ingrese un nombre valido: ");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(nombre, buffer);

    printf("Ingrese su apellido: ");
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer)>19)
    {
        printf("Error. Ingrese un apellido valido: ");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(apellido,buffer);

    //O TAMBIEN strcpy(nombreCompleto, apellido);

    strcpy(nombreCompleto, apellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);

    strlwr(nombreCompleto);

    nombreCompleto[0]=toupper(nombreCompleto[0]);

    //TAMBIEN PUEDE SER

    for(i=0 ;i<strlen(nombreCompleto); i++)
    {
       //if(isspace(palabra[i]));
       /*
       {
       palabra[i+1]=toupper(palabra[i+1]);
       }
       */
        if(nombreCompleto[i]==' ')
        {
            nombreCompleto[i+1]=toupper(nombreCompleto[i+1]);
        }
    }

    puts(nombreCompleto);

    return 0;
}
