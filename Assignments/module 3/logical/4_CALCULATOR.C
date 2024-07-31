// PROGRAM 5 : CALCULATOR - (START) 

#include <stdio.h>

int main() {

  char op;
  float num1, num2;
  
  printf("Enter an operator (+, -, *, /,): ");
  scanf("%c", &op);
 
  printf("Enter a number 1 : ");
  scanf("%f", &num1);
  printf("Enter a number 2 : ");
  scanf("%f", &num2);
  
//  USING SWITCH CASE 
  switch (op) {
    case '+':
      printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
      break;
      
    case '-':
       printf("%.2f + %.2f = %.2f", num1, num2, num1 - num2);
      break;
      
    case '*':
       printf("%.2f + %.2f = %.2f", num1, num2, num1 * num2);
      break;
      
    case '/':
       printf("%.2f + %.2f = %.2f", num1, num2, num1 / num2);
      break;
      
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
// PROGRAM 5 : IF-ELSE LADDER STATEMENT - (END) 
