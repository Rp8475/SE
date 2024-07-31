// PROGRAM 6 : PRINT FIBONACCI SERIES OF GIVEN NUMBER - (START)
#include<stdio.h>
main(){
    int i, n1=0, n2=1, n, n3 = n1 + n2;

    printf("Enter Number : ");
    scanf("%d", &n);
    
    printf("%d\n%d\n", n1, n2);

    for(i=3 ; i<=n ; i++){
    	printf("%d\n", n3);
    	n1 = n2;
    	n2 = n3;
        n3 = n1 + n2;
    }
}
// PROGRAM 6 : PRINT FIBONACCI SERIES OF GIVEN NUMBER - (END)

