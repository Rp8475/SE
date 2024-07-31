//(ii) Monday to Sunday using Switch case - (start)

#include<stdio.h>
main(){
    int n;

    printf("Enter Day number : ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("Monday", n);
            break;
        case 2:
            printf("Tuesday", n);
            break;
        case 3:
            printf("Wednesday", n);
            break;
        case 4:
            printf("Thursday", n);
            break;
        case 5:
            printf("Friday", n);
            break;
        case 6:
            printf("Sarurday", n);
            break;
        case 7:
            printf("Sunday", n);
            break;
    
            default:{
                printf("%n is not valid.", n);
            }
    }
}
// (ii) Monday to Sunday using Switch case - (END)
// PROGRAM 37 : WAP TO SHOW - (END) 
