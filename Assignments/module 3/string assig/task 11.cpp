//PROGRAM : 10 REPLACE LOWERCASE TO UPPERCASE & VICE-VERSA  (START)


#include <stdio.h>
#include<string.h>
#include <ctype.h>

int main()
{
    char a[100]; 
    int count, c, i; 
    printf("Replace lowercase to uppercase & vice-versa :\n"); 
    

    printf("Input the string : ");
    gets(a);
 	sizeof (a);
	stdin;


    i = strlen(a);
    count = i; 

    printf("\nThe given sentence is   : %s", a); 

    printf("\nAfter Case changed the string  is: ");
    for (i = 0; i < count; i++) {
        
        c = islower(a[i]) ? toupper(a[i]) : tolower(a[i]);
    putchar(c); 
    }
    printf("");
	
}
 
 //PROGRAM : 10 REPLACE LOWERCASE TO UPPERCASE & VICE-VERSA  (END)
