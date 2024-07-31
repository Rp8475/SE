//PROGRAM : 7 COPY STRING USING INBUILT METHOD  (START)

#include<stdio.h>
#include<string.h>
main()
{
    char a[20], b[20];
    printf("Enter the string: ");
    gets(a);
    printf("\nenterd string = %s", a);
    strcpy(b,a);
    printf("\ncopied string = %s", b);


}

//PROGRAM : 7 COPY STRING USING INBUILT METHOD  (END)
