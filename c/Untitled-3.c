#include <stdio.h>

int main(){
    float apotema, side, area;

    printf("Write the value for apotema ");
    scanf("%f", &apotema);

    printf("How long is the side of the pentagon? ");
    scanf("%f", &side);

    side = side * 5;
    area = (side * apotema) / 2;

    printf("Your room's area is: %f", area);

    return 0;
}