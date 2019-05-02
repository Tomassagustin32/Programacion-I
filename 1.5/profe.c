#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "profe.h"
#define TAM 10

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
        scanf("%d", &productoParaRetornar.idProveedor);
        printf("Ingrese precio del producto: ");
        scanf("%f", &productoParaRetornar.precio);

        productoParaRetornar.estado=OCUPADO;


    return productoParaRetornar;
}

void mostrarArray(eProducto lista[], int tam)
{
    int i;
    for(i=0; i<10; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            mostrarUnProducto(lista[i]);
        }
    }
}
void mostrarArrayProveedores(eProveedor lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].id=!(LIBRE))
        {
            mostrarUnProveedor(lista[i]);
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
    printf("\nID Proveedor :\t %d", elParametroProducto.idProveedor);
    printf("\nFecha de vencimiento :\t %s", elParametroProducto.fechaVencimiento);
    printf("\nPrecio :\t %f", elParametroProducto.precio);
    printf("\nEstado :\t %d", elParametroProducto.estado);
}
void mostrarUnProveedor(eProveedor elParametroProveedor)
{
    printf("\n\n\n \t\t<<<<<Proveedor >>>>> \n");
    printf("\nAtributo \t Valor ");
    printf("\n---------------------------");
    printf("\nDescripcion :\t %s", elParametroProveedor.descripcion);
    printf("\nLocalidad :\t %s", elParametroProveedor.localidad);
    printf("\nDuenio :\t %s", elParametroProveedor.duenio);
    printf("\nCuit :\t %s", elParametroProveedor.cuit);
    printf("\nID :\t %d", elParametroProveedor.id);

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
        listado[i].idProveedor = 0;
        listado[i].precio = 0;
    }

}
/*void construirArrayProveedores(eProveedor listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i].id = 0;
        strcpy(listado[i].descripcion,"nn");
        strcpy(listado[i].duenio,"");
        strcpy(listado[i].cuit,"");
        strcpy(listado[i].localidad,"");

    }

}*/

void borrarProducto(eProducto listado[], int tam)
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

    float precio[10]={42,43,44,40,41,42,35,36,37,38};
    char nombre[10][50]={"Infinia","Axion Power","V-Power","Infinia Diesel","Axion Diesel","V-Power Diesel","Super","Axion Super","Normal","Kerosene"};
    int idProveedor[10]={1,2,3,1,2,3,1,2,3,1};
    //int id[10]={1,2,3,4,5,6,7,8,9,10};
    char codigoDeBarra[10][13]={"100","200","300","400","500","600","700","800","900","1000"};
    char fechaDeVencimiento[10][50]={"01/2020","02/2020","03/2020","04/2020","05/2020","06/2020","07/2020","08/2020","09/2020","10/2020"};

    int i;

    for(i=0;i<10;i++)
    {
        strcpy(listaProductos[i].codigoDeBarra,codigoDeBarra[i]);
        strcpy(listaProductos[i].nombre,nombre[i]);
        listaProductos[i].idProveedor=idProveedor[i];
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

void inicializarProveedor(eProveedor listaProveedores[],int tam)
{

    int id[3]={1,2,3};
    char descripcion[3][50]={"Petrolera","Petrolera","Petrolera"};
    char localidad[3][13]={"Avellaneda","Bahia Blanca","Rio Negro"};
    char cuit[3][50]={"444","555","666"};
    char duenio[3][50]={"YPF","Axion","Shell"};

    int i;

    for(i=0;i<3;i++)
    {
        listaProveedores[i].id=id[i];
        strcpy(listaProveedores[i].descripcion,descripcion[i]);
        strcpy(listaProveedores[i].localidad,localidad[i]);
        strcpy(listaProveedores[i].cuit,cuit[i]);
        strcpy(listaProveedores[i].duenio, duenio[i]);
    }



}

void mostrarProductosConProveedor(eProducto listadoProductos[] , int tamprod , eProveedor listadoProveedores[], int tamprov)
{
   int i;
   int j;
    for(i=0; i<tamprod; i++)
    {
            mostrarUnProducto(listadoProductos[i]);
            for(j=0; j<tamprov; j++)
            {
                if( listadoProductos[i].idProveedor == listadoProveedores[j].id)
                {
                    mostrarUnProveedor(listadoProveedores[j]);
                }

            }
    }
}
void mostrarProveedoresConProductos(eProveedor listadoProveedores[], int tamprov,eProducto listadoProductos[], int tamprod)
{
   int i;
   int j;
    for(i=0; i<tamprov; i++)
    {
            mostrarUnProveedor(listadoProveedores[i]);
            for(j=0; j<tamprod; j++)
            {
                if( listadoProveedores[i].id == listadoProductos[j].idProveedor)
                {
                    mostrarUnProducto(listadoProductos[j]);
                }

            }
    }
}

/*void mostrarArrayConSusProductos(eProveedor listadoProveedores[], int tamprov, eProducto listadoProductos[], int tamprod)
{

}
*/
//FUNCION PARA OBSERVAR, NO CONCRETADA
void mostrarProductosConProveedorElMaximo(eProducto listadoProductos[], int tamprod, eProveedor listadoProveedores[], int tamprov)
{
 int i;
 int j;
 int bandera = 0;
    for(i=0; i<tamprod; i++)
    {
            mostrarUnProducto(listadoProductos[i]);
            for(j=0; j<tamprov; j++)
            {
                if( listadoProductos[i].precio > bandera)
                {
                    bandera = listadoProductos[i].precio;
                    mostrarUnProveedor(listadoProveedores[j]);
                }

            }
    }
}
