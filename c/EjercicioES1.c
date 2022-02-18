#include <stdio.h>

int main(){
    int No1, No2, No3;

    printf("Escriba el valor para el No1: ");
    scanf("%d", &No1);
    printf("Escriba el valor para el No2: ");
    scanf("%d", &No2);
    printf("Escriba el valor para el No3: ");
    scanf("%d", &No3);

    if(No1 > No2 && No1 > No3){
        printf("El valor mayor corresponde a No1 = %i", No1);
    }
    else if(No2 > No1 && No2 > No3){
        printf("El valor mayor corresponde a No2 = %i", No2);
    }
    else if(No3 > No1 && No3 > No2){
        printf("El valor mayor corresponde a No3 = %i", No3);
    }
    else{
        printf("Es probable que los valores sean todos iguales.");
    }

    return 0;
}