// PROGRAM 12 : GREATEST NUMBER BY TERNARY OPRATOR (START) 

#include<stdio.h>

main()
{
	int a, b, c, larg;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	
	
	larg = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Largest number is: %d", larg);

}

// PROGRAM 12 : GREATEST NUMBER BY TERNARY OPRATOR (END) 
