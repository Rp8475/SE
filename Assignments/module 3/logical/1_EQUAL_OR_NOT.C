// PROGRAM 1 : CHECK GIVEN TWO INTEGERS ARE EQUAL OR NOT - (START) 
#include<stdio.h>
main(){
    int a, b;

    // GET VALUE FROM USER
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d", &b);

    // IF-ELSE CONDITION
    if(a == b){
        printf("%d and %d are Equal...", a,b);
    }
    else{
        printf("%d and %d are not Equal !!", a,b);
    }
}
// PROGRAM 1 : CHECK GIVEN TWO INTEGERS ARE EQUAL OR NOT - (END)
