//PROGRAM : 2 PRINT INDIVISUAL CHARACTOR IN STRING  (START)

#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char a[10],i;  
          
    printf("Individual characters from given string: "); 
	gets(a);
       
    for(i = 0; i < strlen(a); i++){  
        printf("%c\n", a[i]);  
    }  
           
}  

//PROGRAM : 2 PRINT INDIVISUAL CHARACTOR IN STRING  (END)
