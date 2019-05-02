#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "profe.h"
#define TAM 3

eProducto pedirProducto()
{
    eProducto productoParaRetornar;

        printf("Ingrese codigo de barra: ");
        fflush(stdin);
        gets(productoParaRetornar.codigoDeBarra);
        printf("Ingrese fdv del producto: ");
        fflush(stdin);
        gets(productoParaRetornar.fechaVencimiento);
        printf("Ingrese nombre del producto: ");
        fflush(stdin);
        gets(productoParaRetornar.nombre);
        printf("Ingrese proveedor: ");
        fflush(stdin);
        gets(productoParaRetornar.proveedor);
        printf("Ingrese precio del producto: ");
        scanf("%f", &productoParaRetornar.precio);

        productoParaRetornar.estado=OCUPADO;


    return productoParaRetornar;
}

void mostrarArray(eProducto lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            mostrarUnProducto(lista[i]);
        }
    }
}

void mostrarUnProducto(eProducto elParametroProducto)
{
    printf("\n\n\n \t\t<<<<<Producto >>>>> \n");
    printf("\nAtributo \t Valor ");
    printf("\n---------------------------");
    printf("\nCodigo :\t %s", elParametroProducto.codigoDeBarra);
    printf("\nNombre :\t %s", elParametroProducto.nombre);
    printf("\nProveedor :\t %s", elParametroProducto.proveedor);
    printf("\nFecha de vencimiento :\t %s", elParametroProducto.fechaVencimiento);
    printf("\nPrecio :\t %f", elParametroProducto.precio);
    printf("\nEstado :\t %d", elParametroProducto.estado);
}

void cargarArray(eProducto listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i]=pedirProducto();
    }
}

void construirArray(eProducto listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i].estado = 0;
        strcpy(listado[i].nombre,"nn");
        strcpy(listado[i].codigoDeBarra,"");
        strcpy(listado[i].fechaVencimiento,"");
        strcpy(listado[i].proveedor,"");
        listado[i].precio = 0;
    }

}

int borrarProducto(eProducto listado[], int tam)
{
   int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(listado[i].codigoDeBarra, codigo)==0)
       {
           listado[i].estado = LIBRE;
           loEncontro = 1;
           break;
       }
   }
   if(loEncontro==0)
   {
       printf("Codigo INEXISTENTE");
   }
}

int insertProducto(eProducto listado[], int tam)
{
    int indice;
    indice=dameLugarLibre(listado, TAM);
    if(indice!=-1)
    {
        listado[indice]=pedirProducto();
    }
    return indice;
}

int dameLugarLibre(eProducto listado[], int tam)
{
    int i;
    int index = -1;
    for(i=0; i<tam; i++)
    {
        if(listado[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

void inicializarProductos(eProducto listaProductos[],int tam)
{

    float precio[3]={50,42.95,9.52};
    char nombre[3][50]={"Agua 2Lt","Cap. Espacio","Turron"};
    char proveedor[3][50]={"Coca-Cola","Bagley","Arcor"};

    char codigoDeBarra[3][13]={"77951234","77959876","70"};

    char fechaDeVencimiento[3][50]={"22/10/2020","10/05/2019","15/12/2008"};

    int i;

    for(i=0;i<3;i++)
    {
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].nombre,nombre[i]);
        strcpy(listaProductos[i].proveedor, proveedor[i]);
        strcpy(listaProductos[i].fechaVencimiento, fechaDeVencimiento[i]);
        listaProductos[i].precio=precio[i];
        listaProductos[i].estado = OCUPADO;
    }



}

int editarProducto(eProducto lista[], int tam)
{
    int i;
    char codigo[50];
    int loEncontro = 0;

    printf("Ingrese el codigo de barras: ");
    fflush(stdin);
    gets(codigo);

    for(i=0; i<tam; i++)
    {
        if(strcmp(lista[i].codigoDeBarra, codigo)==0)
        {
            printf("Ingrese el nuevo precio: ");
            scanf("%f", &lista[i].precio);
            loEncontro = 1;
            break;
        }
    }
    if(loEncontro == 0)
    {
        printf("Codigo INEXISTENTE");
    }
}
