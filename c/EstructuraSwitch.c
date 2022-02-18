//Programa que pida el numero de un dia y 
//que devuelva el nombre del dia correspondiente
#include <stdio.h>

int main(){
    int dia;

    printf("Digite un valor de dia> ");
    scanf("%d", &dia);

    switch(dia){
        case 1:
            printf("Lunes");
            break;
        case 2:
            printf("Martes");
            break;
        case 3:
            printf("Miercoles");
            break;
        case 4:
            printf("Jueves");
            break;
        case 5:
            printf("Viernes");
            break;
        case 6:
            printf("Sabado");
            break;
        case 7:
            printf("Domingo");
            break;
        default:
            printf("Este dato no corresponde a un valor correcto");
    }

    return 0;

}