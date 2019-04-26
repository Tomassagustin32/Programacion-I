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
    return index;
    }
}

void inicializarProducto(eProducto listaDeProductos[], int cant)
{
    char codigoDeBarra[3][13]={"77951234","77956342","99871234"};
    char nombre[3][50]={"agua 2lt", "Cap. Espacio", "Turron"};
    char fechaVencimiento[3][50]={"22/10/20","9/05/09","30/08/19"};
    char proveedor[3][50]={"Coca-Cola", "Bagley","Arcor"};
    float precio[3]={50 , 42 , 18};
    int estado[3]={1,1,1};

    int i;

    for(i=0; i<cant;i++)
    {

        strcpy(listaDeProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaDeProductos[i].nombre,nombre[i]);
        strcpy(listaDeProductos[i].fechaVencimiento,fechaVencimiento[i]);
        strcpy(listaDeProductos[i].proveedor,proveedor[i]);
        listaDeProductos[i].precio,precio[i];
        listaDeProductos[i].estado, estado[i]=OCUPADO;
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
