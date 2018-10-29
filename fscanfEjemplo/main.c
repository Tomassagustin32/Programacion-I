#include <stdio.h>
#include <stdlib.h>

eAlumno* nuevoAlumno();
void mostrarAlumno();
int eAlumno_setName(eAlumno* this, char* nombre);
char* eAlumno_getName(eAlumno* this);

int main()
{
   char name[500], lastName[500], id[500],isEmpty[500];
   int cont=1;

   FILE * pFile;

   pFile = fopen ("MOCK_DATA", "r");

   while(!feof(pFile))
   {

       if(cont %250 == 0)
       {
           system("pause");
       }
       cont++;



       fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName,isEmpty);

       printf("%s - %s, %s - %s\n", id, name, lastName, isEmpty);

   }

   fclose(pFile);

   return(0);
}

eAlumno* nuevoAlumno(char nombre[50], int i)
{
    eAlumno* miAlumno;

    /*miAlumno = (eAlumno*) malloc(sizeof(eAlumno));
    if(miAlumno!=NULL)
    {
        strcpy(miAlumno->nombre, "");
        miAlumno->edad = 0;
    }
    */

    miAlumno = calloc(sizeof(eAlumno),1);

    return miAlumno;
}

void mostrarAlumno(eAlumno* unAlumno)
{
    printf("%s---%d", unAlumno->nombre, unAlumno->edad);
}

int eAlumno_setName(eAlumno* this, char* nombre)
{
    int estado = 0;
    if(this != NULL)
    {
        estado = 1;
        strcpy(this->nombre, nombre);
    }

    return estado;
}

char* eAlumno_getName(eAlumno* this)
{
    char* nombre = "";

    if(this != NULL)
    {
        strcpy(nombre, this-> nombre);

    }
    else{

        printf("Error en el programa");
    }
    return nombre;
}
