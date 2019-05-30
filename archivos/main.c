#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARCHIVO ".\\alumnos.csv"

typedef struct
{
  char nombre[50];
  int legajo;
  int nota;
}eAlumno;

int main()
{

    eAlumno unAlumno;

    strcpy(unAlumno.nombre, "pepe argento");
    unAlumno.legajo = 100;
    unAlumno.nota = 9;

    FILE *pArchivo;


    //printf("%p", pArchivo);

    if((pArchivo = fopen(ARCHIVO, "a"))==NULL)
    {
        printf("El archivo no puede ser abierto");
        exit(1);
    }
    else
    {
        printf("archivo abierto");

    }
   // fwrite(&unAlumno, sizeof(unAlumno), 1, pArchivo);

    unAlumno.legajo = 1;
    unAlumno.nota = 9;
    strcpy(unAlumno.nombre, "pepe");
    fflush(stdin);
   // fwrite(&unAlumno, sizeof(unAlumno), 1, pArchivo);
    char texto[]="lalala;555;10";
    int largo=strlen(texto);
    fwrite(texto, sizeof(char), largo, pArchivo);
    fclose(pArchivo);

    if((pArchivo = fopen(ARCHIVO, "r"))==NULL)
    {
        printf("El archivo no puede ser abierto para lectura");
        exit(1);
    }
    else
    {
        char renglon[70];
        while(!feof(pArchivo))
        {
            int cantidad = fread(renglon, sizeof(char),70,pArchivo);
            printf("\ncantidad %d  y texto %s \n", cantidad, texto);
        }
            fclose(pArchivo);

    }

    return 0;
}
