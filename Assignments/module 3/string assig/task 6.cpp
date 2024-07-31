//PROGRAM : 6 COUNT TOTAL ALFA,DIG,SPC IN STRING  (START)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


 main() {
    char a[100];
    int alp, dig, special, i; 
    alp = 0;
	dig = 0;
	special = 0;
	i = 0; 

    printf("\nCount total number of alphabets, digits, and special characters :\n"); 
    printf("\n********************************************************************************************\n");
    printf("Input the string : ");
    gets(a); 
	sizeof (a);
	stdin; 


    while (a[i] != '\0') {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) 
		{
            alp++; 
        } 
		else if (a[i] >= '0' && a[i] <= '9') 
		{
            dig++;
        } 
		else 
		{
            special++; 
        }
        i++;
    }


    printf("Number of Alphabets : %d\n", alp);
    printf("Number of Digits : %d\n", dig);
    printf("Number of Special characters : %d\n\n", special);
	
	
}
//PROGRAM : 6 COUNT TOTAL ALFA,DIG,SPC IN STRING  (END)
