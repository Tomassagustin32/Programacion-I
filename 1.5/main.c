#include <stdio.h>
#include <stdlib.h>
#include "profe.h"

int main()
{
   int opcion;


    eProducto unProducto;
    //eProducto listaProductos[TAM] = {{"12345678910", "paty", "10/5/98","patyviena", 25, 1},{"10987654321","queso","19/7/85","panchito", 30, 1},{"2949238", "jamon","29/2/59","vneic", 35, 1}};
    eProducto listaProductos[TAM];
    //unProducto = pedirProducto();
    //cargarArray(TAM, listaProductos);
    construirArray(listaProductos, TAM);
    inicializarProductos(listaProductos, TAM);
    mostrarArray(listaProductos, TAM);

    //mostrarUnProducto(unProducto);

   do
   {
       printf("\n1.ALTA\n2.BAJA\n3.MODIFICAR\n4.MOSTRAR\nELIJA OPCION: ");
       scanf("%d", &opcion);

       switch(opcion)
       {
            case 1:
                insertProducto(listaProductos, TAM);
                break;
            case 2:
                borrarProducto(listaProductos, TAM);
                break;
            case 3:
                editarProducto(listaProductos, TAM);
                break;
            case 4:
                mostrarArray(listaProductos,TAM);
                break;
       }
   }while(opcion!=10);

    return 0;
}
