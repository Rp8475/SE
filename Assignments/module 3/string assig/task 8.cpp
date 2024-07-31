//PROGRAM : 8 VOWEL OR CONSTANT  (START)



#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {
    char a[100]; 
    int i, l, V, C; 

    printf("Count vowel & string :\n");
    printf("**********************************************************\n");
    printf("Input the string : ");
    gets(a);
	sizeof (a);
	 stdin;

    V = 0; 
    C = 0; 
    l = strlen(a); 

    
    for (i = 0; i < l; i++) 
	{
        
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') 
		{
            V++; 
        }
        
        else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) 
		{
            C++; 
        }
    }

    printf("\ntotal number of vowel is : %d\n", V);
    printf("total number of consonant is : %d", C);
	

}
//PROGRAM : 8 VOWEL OR CONSTANT  (END)
