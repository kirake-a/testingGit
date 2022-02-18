#include <stdio.h>
#include <math.h>

int
main (){
  float num1, num2;
  char signo;

  printf ("Ingrese el operador (+,-,*,/,P) : ");
  scanf ("%c", &signo);
  printf ("Por favor ingrese el primer numero ");
  scanf ("%f", &num1);
  printf ("Por favor ingrese el segundo numero ");
  scanf ("%f", &num2);
  
  switch (signo){
    case '+':
      printf ("El resultado de la suma de %.2f + %.2f es %.2f ", num1, num2, num1 + num2);
      break;
    case '-':
      printf ("El resultado de la resta de %.2f - %.2f es %.2f ", num1, num2, num1 - num2);
      break;
    case '*':
      printf ("El resultado de la multiplicacion de %.2f * %.2f es %.2f ", num1, num2, num1 * num2);
      break;
    case '/':
      printf ("El resultado de la division de %.2f / %.2f es %.2f ", num1, num2, num1 / num2);
      break;
    case 'P':
      printf ("El resultado de la potencia de %.2f ^ %.2f es %.2f ", num1, num2, pow (num1, num2));
      break;
    default:
      printf ("El signo a operar no es valido");
    }
 
  return 0;
}