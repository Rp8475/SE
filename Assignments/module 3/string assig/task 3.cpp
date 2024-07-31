//PROGRAM : 3 REVERSE STRING USING FOR LOOP  (START)

#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char a[40],i;
    printf (" Enter a string to be reversed: ");  
    gets(a);  
    
    
       printf (" \n After the reverse of a string:"); 
       
       
    for(i=strlen(a)-1;i>=0;i--){   
    printf (" \n%c ",a[i]);   
}    

}  

//PROGRAM : 3 REVERSE STRING USING FOR LOOP  (END)
