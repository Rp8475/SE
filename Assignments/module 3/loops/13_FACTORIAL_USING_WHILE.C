// PROGRAM 13 : PRINT FACTORIAL OF GIVEN NUMBER USING WHILE LOOP - (START)
#include<stdio.h>
main(){
    int i=1, fac=1, n;

    printf("Enter integer : "); 
    scanf("%d", &n);

	while(i <= n){
        fac = fac * i;
        i++;
	}
    
    printf("%d", fac);
}
// PROGRAM 13 : PRINT FACTORIAL OF GIVEN NUMBER USING WHILE LOOP - (END)
