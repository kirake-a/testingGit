#include <stdio.h>

//Trying to write another code as examples to learn

int main(){
    float side, op;

    printf("Write a value for the side of the square. ");
    scanf("%f", &side);

    op = side * side;

    printf("The area of the square is:, %.2f", op);
    
    return 0;
}