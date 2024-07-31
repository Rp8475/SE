

#include <stdio.h>


main()
{
    char a[100];
    int i,length=0;
    
    printf("Enter a string: \n");
    gets(a);
    for(i=0; a[i]!='\0'; i++)
    {
        length++; 
    }
    
    printf("\nLength of input string: %d",length);
    
}
