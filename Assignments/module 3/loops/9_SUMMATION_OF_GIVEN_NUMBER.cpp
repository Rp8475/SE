// PROGRAM 9 : SUMMATION_OF_GIVEN_NUMBER - (START)

#include<stdio.h>  
main()    
{    
  int n,i;
  int sum=0;
    
  printf("Enter a number :");    
  scanf(" %d",&n);    
while(n>0)    
{    
 i=n%10;    
 sum=sum+i;    
 n=n/10;    
}    
 printf("Sum = %d",sum);     
}   
// PROGRAM 9 : SUMMATION_OF_GIVEN_NUMBER - (END)
