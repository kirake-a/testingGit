#include <stdio.h>

int main(){
    float hora_pago, horas_dia, dias_trabajo, money_per_day, money_week;

    //Asking for values for the variables
    printf("Inserte lo que cobra por hora de trabajo: ");
    scanf("%f", &hora_pago);
    printf("Inserte las horas trabajadas al dia: ");
    scanf("%f", &horas_dia);
    printf("Inserte los dias de la semana que trabaja: ");
    scanf("%f", &dias_trabajo);

    //The process
    money_per_day = hora_pago * horas_dia;
    money_week = money_per_day * dias_trabajo;

    //Output
    printf("Usted cobra por dia: %.3f \n", money_per_day );
    printf("Por semana obtiene de ganancia lo sigueinte: %.3f", money_week);

    return 0 ;
}