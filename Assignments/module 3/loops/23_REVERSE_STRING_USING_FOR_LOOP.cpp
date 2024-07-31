//PROGRAM : 23 REVERSE THE STRING USING FOR LOOP (START)

#include <stdio.h>


main(){
    int n, r, sum = 0, i; 
   printf("Input a number: "); 
    scanf("%d", &n); 

    for(i = n; n != 0; n = n / 10){ // LOOP TO REVERSE DIGIT OF NUMBER
         r = n % 10; 
         sum = sum * 10 + r; 
    }

    printf("The number in reverse order is : %d \n", sum); // REVERSE NUMBER
}

//PROGRAM : 23 REVERSE THE STRING USING FOR LOOP (END)
