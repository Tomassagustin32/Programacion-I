#include <stdio.h>
#include <stdlib.h>
int ingresarOpcion(void);
int main()
{
    int opcion;
    do
    {
        printf("1.Sumar\n");
        printf("2.Restar\n");
        printf("3.Multiplicar\n");
        printf("4.Dividir\n");
        printf("5.Salir\n");

        opcion=ingresarOpcion();

        switch(opcion)
        {
            case 1:
                printf("\nEstoy sumando!!!");
                break;
            case 2:
                printf("Estoy restando!!!");
                break;
            case 3:
                printf("Estoy multiplicando!!!");
                break;
            case 4:
                printf("Estoy dividiendo!!!");
                break;

        }
    system("pause");
    system("cls");
    }while(opcion!=5);


    return 0;
}

int ingresarOpcion(void)
{
    int opcion;

    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
