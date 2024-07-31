// PROGRAM 17 : PATTERNS - (START)

// A
// A B
// A B C
// A B C D
// A B C D E
#include<stdio.h>
void main(){
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
}

// A
// B C 
// D E F 
// G H I J 
// K L M N O 
#include<stdio.h>
void main(){
    int n=65,i,j;

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%c ", n);
            n++;
        }
        printf("\n");
    }
}
// 1
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
#include<stdio.h>
void main(){
    int n=1,i,j;

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}

//           *
//         * * *
//       * * * * *
//     * * * * * * *
//   * * * * * * * * *
#include<stdio.h>
void main(){
    int i,j,k;

    for(i=0 ; i<5 ; i++){
        for(k=0 ; k<2*(5-i)-1 ; k++){
            printf(" ");
        }
        for(j=0 ; j<2*i+1 ; j++){
            printf(" *");   
        }
        printf("\n");
    }
}

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * * 
// * *
// *
#include <stdio.h>

void main() {

  int i, j;

  for (i = 1; i <= 5; i++) {
    for (j = 0; j < i; j++) {
      printf(" *");
    }
    printf("\n");
  }
  
  for (i = 1; i <= 5-1; i++) {
    for (j = 0; j < 5-i; j++) {
      printf(" *");
    }
    printf("\n");
  }
  }
// PROGRAM 17 : PATTERNS - (END) 
