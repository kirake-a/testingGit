/* Elaborar un programa que simule una calculadora,
que lea dos numeros y un simbolo (suma, resta, multiplicacion,
division, potencia) e imprima la expresion y el resultado. */

#include <stdio.h>
#include <math.h>

int main(){
    int No1, No2, resultado;
    char caracter;

    printf("Inserte valor a No1: ");
    scanf("%d", &No1);
    printf("Inserte valor a No2: ");
    scanf("%d", &No2);
    printf("Inserte el signo de la operacion a realizar: ");
    scanf(" %c", &caracter);

    switch(caracter){
        case '+':
            resultado = No1 + No2;
            printf("Operacion: %i + %i ", No1, No2);
            break;
        case '-':
            resultado = No1 - No2;
            printf("Operacion: %i - %i ", No1, No2);
            break;
        case '*':
            resultado = No1 * No2;
            printf("Operacion: %i * %i ", No1, No2);
            break;
        case '/':
            resultado = No1 / No2;
            printf("Operacion: %i / %i ", No1, No2);
            break;
        case '^': //Revisar bien este caso con la funcion pow, para que no mande error este codigo
            resultado = No1 ^ No2;
            printf("Operacion: %i ^ %i ", No1, No2);
            break;
        default:
            printf("Signo no soportado.");
    }
    
    printf("El resultado de su operacion es: %i", resultado);

    return 0;
}