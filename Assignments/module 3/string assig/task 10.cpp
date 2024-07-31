//PROGRAM : 8 GETTING SUBSTRING FROM MAIN STRING   (START)

#include <stdio.h>

int main() {
    char a[100], sa[100]; 
    int start, length, i = 0; 

    printf("Extract a substring:\n"); 
    printf("\n");

    printf("Input the string : ");
    gets(a);
 	sizeof (a);
	stdin;

    printf("Input the position to start extraction :");
    scanf("%d",&start); 

    printf("Input the length of substring :");
    scanf("%d", &length); 


    while (i < length) {
        sa[i] = a[start + i - 1]; 
        i++;
    }
    sa[i] = '\0'; 

    printf("The substring is : \" %s\" \n\n", sa); 
	
}

//PROGRAM : 8 GETTING SUBSTRING FROM MAIN STRING   (END)
