//PROGRAM : 13 REMOVE ANY NUMBER & SPECIAL CHARACTOR IN STRING  (START)

#include <stdio.h>
#include <string.h>

int main() {
    char str[150]; 
    int i, j; 

    printf("\nRemove characters in String Except Alphabets :\n"); 
    printf("**********************************\n");

    printf("Input the string : ");
    fgets(str, sizeof str, stdin); 

    for (i = 0; str[i] != '\0'; ++i) {
        while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z' || str[i] == '\0'))){

            for (j = i; str[j] != '\0'; ++j) {
                str[j] = str[j + 1]; 
            }
            str[j] = '\0'; 
        }
    }

    printf("After removing the Output String : %s\n", str); 
	
}

//PROGRAM : 13 REMOVE ANY NUMBER & SPECIAL CHARACTOR IN STRING  (END)
