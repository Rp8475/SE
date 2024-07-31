// PROGRAM 24 : PRINT SERIES - (START)
// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
main(){
    int n,i;

	// Get value from user
    printf("Enter Number : ");
    scanf("%d", &n);

    int current_sum = 0;	// Store the sum of cuurent value of i
    int total_sum = 0;		// Store the total sum of n
    
    // Display the mthod of the Program
    printf("This can work like that (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)\n");
	
    for(i=2 ; i<=n ; i++){
		// sum = ((n * (n + 1) * (2 * n + 4)) / 12); 
		current_sum = current_sum + i;
		total_sum = total_sum + current_sum;
		
		printf("\n%d",total_sum);
    }
    
    // Display Total sum
    printf("\nsum = %d", total_sum);
}

// PROGRAM 24 : PRINT SERIES - (END)
