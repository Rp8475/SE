//PROGRAM : 5 COMPARE STRING WITHOUT USING INBUILT METHOD  (START)

#include <stdio.h> 
 main() { 

    char a[100], b[100];  
    int i = 0;  

    
    printf("Enter the first string: ");
    scanf("%s", a);

    printf("Enter the second string: ");
    scanf("%s", b);


    while (a[i] == b[i] && a[i] != '\0' == b[i]!='\0') {
        i++;
    }

    if (a[i] == b[i]) {
        printf("strings are coparitavly same ");
    } else{
	 printf("strings are coparitavly diffrent ");
    }



}

//PROGRAM : 5 COMPARE STRING WITHOUT USING INBUILT METHOD  (END)
