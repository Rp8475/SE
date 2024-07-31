//PROGRAM : 1 FIND MAXIMUM LENGTH IN STRING  (START)

#include<stdio.h>



int main()
{
    char a[10];
    int i,l=0;
    
    printf("Enter a string: ");
    scanf("%s",a);
    for(i=0; a[i]!='\0'; i++)
    {
        l++; 
    }
    
    printf("\nLength of input string: %d",l);
}

//PROGRAM : 1 FIND MAXIMUM LENGTH IN STRING  (END)
