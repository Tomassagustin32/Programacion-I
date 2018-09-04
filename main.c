#include <stdio.h>
#include <stdlib.h>

float suma(float);
float resta(float);
float division(float);
float multiplicacion(float);
float factorial(float);
float numeroUno, numeroDos, resultado;
 int main()
 {


    numeroUno=printf("Ingrese el primer numero: ");
    scanf("%f", &numeroUno);
    numeroDos=printf("Ingrese el segundo numero: ");
    scanf("%f", &numeroDos);

    /*int opcion;
    float resultado;
    do{
        printf("\nIngrese una opcion: \n");
        printf("\n 1:  Calcular la suma :");
        printf("\n 2:  Calcular la resta :");
        printf("\n 3:  Calcular la multiplicacion :");
        printf("\n 4:  Calcular la division :");
        printf("\n 5:  Calcular el factorial :");
        printf("\n 6:  Salir de la calculadora:");
        printf("\nOpcion a elegir: ");
        scanf("%d",&opcion);
        switch(opcion){
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            multiplicacion();
            break;
        case 4:
            division();
            break;
        case 5:
            factorial();
            break;
        case 6:
            printf("\nUso la calculadora de Tomas Martinez.");
            break;
        default:
            printf("\nOpcion incorrecta.");
            printf("\n");
            break;
        }
    }while (opcion != 6);
    return 0;
*/}
    float suma(float)
    {
        resultado = numeroUno + numeroDos;
        printf("\nEl resultado de A+B es: %f",resultado);
        return 0;
    }
    float resta(float)
    {
        resultado = numeroUno - numeroDos;
        printf("\nEl resultado de A-B es: %f",resultado);
        return 0;
    }
    float division(float)
    {

        if (numeroDos==0)
        {
            printf("\nNo se puede dividir por 0 (cero)");
        }
        else
        {
            resultado = numeroUno / numeroDos;
            printf("\nEl resultado de A/B es: %f",resultado);
        }
        return 0;
    }
    float multiplicacion(float)
    {
        resultado = numeroUno * numeroDos;
        printf("\nEl resultado de A*B es: %f",resultado);
        return 0;
    }
    float factorial(float)
    {

        int parteEntera1, parteEntera2, resultado1 = 1, resultado2 = 1, contador1, contador2;
        printf("\nIngrese el operador 1: ");
        scanf("%f",&numeroUno);
        printf("\nIngrese el operador 2: ");
        scanf("%f",&numeroDos);
        parteEntera1 = numeroUno; //Saco la parte entera del numero ingresado.
        parteEntera2 = numeroDos; //Saco la parte entera del numero ingresado.
        for(contador1 = 1; contador1 <= parteEntera1; contador1++){
            resultado1 = resultado1 * contador1;
        }
        for(contador2 = 1; contador2 <= parteEntera2; contador2++){
            resultado2 = resultado2 * contador2;
        }
    printf("\nEl factorial de A es: %d y el factorial de B es: %d",resultado1,resultado2);
    return 0;
    }
