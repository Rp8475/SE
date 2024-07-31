//PROGRAM : 4 COUNT TOTAL WORDS IN STRING  (START)

#include <stdio.h>
#include<string.h>
  
int main()
{
    char a[50];
    int i, w;


    printf("Enter a string: ");
    gets(a);

    i = 0;
    w = 1;

    // Runs a loop to end of string //
    while(a[i] != '\0')
    {

        if(a[i]==' ' || a[i]=='\n' || a[i]=='\t')
        {
            w++;
        
		}

        i++;
    }

    printf("number of words = %d", w);

    
}

//PROGRAM : 4 COUNT TOTAL WORDS IN STRING  (END)
