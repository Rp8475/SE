// PROGRAM 37 : WAP TO SHOW - (START) 
// (i) Monday to Sunday using Switch case - (START) 
#include<stdio.h>
 main(){
    char c;

    printf("Enter Character : ");
    scanf("%c", &c);

    switch(c){
        case 'A':
            printf("%c is Vowel", c);
            break;
        case 'a':
            printf("%c is Vowel", c);
            break;
        case 'E':
            printf("%c is Vowel", c);
            break;
        case 'e':
            printf("%c is Vowel", c);
            break;
        case 'I':
            printf("%c is Vowel", c);
            break;
        case 'i':
            printf("%c is Vowel", c);
            break;
        case 'O':
            printf("%c is Vowel", c);
            break;
        case 'o':
            printf("%c is Vowel", c);
            break;
        case 'U':
            printf("%c is Vowel", c);
            break;
        case 'u':
            printf("%c is Vowel", c);
            break;

            default:{
                printf("%c is Consonant.", c);
            }
    }
}
// (i) Monday to Sunday using Switch case - (END) 


// (ii) Monday to Sunday using Switch case - (START)

#include<stdio.h>
main(){
    int n;

    printf("Enter Day number : ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("Monday", n);
            break;
        case 2:
            printf("Tuesday", n);
            break;
        case 3:
            printf("Wednesday", n);
            break;
        case 4:
            printf("Thursday", n);
            break;
        case 5:
            printf("Friday", n);
            break;
        case 6:
            printf("Sarurday", n);
            break;
        case 7:
            printf("Sunday", n);
            break;
    
            default:{
                printf("%n is not valid.", n);
            }
    }
}
// (ii) Monday to Sunday using Switch case - (END) 
// PROGRAM 37 : WAP TO SHOW - (END)
