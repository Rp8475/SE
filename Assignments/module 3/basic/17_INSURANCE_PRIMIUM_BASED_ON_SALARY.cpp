// PROGRAM 16 : INSURANCE PRIMIUM BASE ON SALARY  - (START)

#include<stdio.h>

int main()
{
 int salery, years, yearly_premium,premium,premium_money;
 char a='%';
 
 printf("Enter your sum assured:");
 scanf("%d", &salery);
 
  printf("Enter you want to spend money on premiun by %c :",a);
 scanf("%d", &premium);
 
 
 
 printf("Enter life insurance policy term(in years):");
 scanf("%d", &years);
 
pmoney = (salery*premium)/100;

 printf("Your Premium : %.2f\n",(float) premium_money); 

 printf("Your Yearly Premium     : %.2f\n",(float) premium_money/(years)); 

}

// PROGRAM 16 : INSURANCE PRIMIUM BASE ON SALARY  - (END)
