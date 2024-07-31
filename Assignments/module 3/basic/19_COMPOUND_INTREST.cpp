// PROGRAM 19 : COMPOUND INTREST  - (START)
#include <stdio.h>
#include <math.h> 

int main() {
    float p_amount, time, amount,c_interest,rate;
    
    
    printf("Enter the principal amount: ");
    scanf("%f",&p_amount);
    printf("Enter the rate of interest: ");
    scanf("%f",&rate);
  printf("Enter the time duration: ");
    scanf("%f",&time);
    
    
    
   amount = p_amount*((pow((1+rate/100),time)));
    
    c_interest = amount - p_amount;
    
     printf("\n\ntotal compound amount is : %.2f\n",amount);
      printf("total compound interset is : %.2f",c_interest);
}
// PROGRAM 19 : COMPOUND INTREST  - (END)
