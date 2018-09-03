#include <stdio.h>
#include <stdlib.h>
void suma(void);
void resta(void);
void division(void);
void multiplicacion(void);
void factorial(void);

int main(){
    int opcion;
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
}

void suma(void){
    float operador1, operador2, resultado;
    printf("\nIngrese el operador 1: ");
    scanf("%f",&operador1);
    printf("\nIngrese el operador 2: ");
    scanf("%f",&operador2);
    resultado = operador1 + operador2;
    printf("\nEl resultado de A+B es: %f",resultado);
    return 0;
}

void resta(void){
    float operador1, operador2, resultado;
    printf("\nIngrese el operador 1: ");
    scanf("%f",&operador1);
    printf("\nIngrese el operador 2: ");
    scanf("%f",&operador2);
    resultado = operador1 - operador2;
    printf("\nEl resultado de A-B es: %f",resultado);
    return 0;
}

void division(void){
    float operador1, operador2, resultado;
    printf("\nIngrese el operador 1: ");
    scanf("%f",&operador1);
    printf("\nIngrese el operador 2: ");
    scanf("%f",&operador2);
    if (operador2==0){
        printf("\nNo se puede dividir por 0 (cero)");
    }
    else{
        resultado = operador1 / operador2;
        printf("\nEl resultado de A/B es: %f",resultado);
    }
    return 0;
}

void multiplicacion(void){
    float operador1, operador2, resultado;
    printf("\nIngrese el operador 1: ");
    scanf("%f",&operador1);
    printf("\nIngrese el operador 2: ");
    scanf("%f",&operador2);
    resultado = operador1 * operador2;
    printf("\nEl resultado de A*B es: %f",resultado);
    return 0;
}

void factorial(void){
    float operador1, operador2;
    int parteEntera1, parteEntera2, resultado1 = 1, resultado2 = 1, contador1, contador2;
    printf("\nIngrese el operador 1: ");
    scanf("%f",&operador1);
    printf("\nIngrese el operador 2: ");
    scanf("%f",&operador2);
    parteEntera1 = operador1; //Saco la parte entera del numero ingresado.
    parteEntera2 = operador2; //Saco la parte entera del numero ingresado.
    for(contador1 = 1; contador1 <= parteEntera1; contador1++){
        resultado1 = resultado1 * contador1;
    }
    for(contador2 = 1; contador2 <= parteEntera2; contador2++){
        resultado2 = resultado2 * contador2;
    }
    printf("\nEl factorial de A es: %d y el factorial de B es: %d",resultado1,resultado2);
    return 0;
}
