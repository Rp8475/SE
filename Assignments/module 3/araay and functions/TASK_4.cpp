
#include<stdio.h>
int multiplyNumbers();


multiplyNumbers(int n) {
    if (n>=1)
      return n*multiplyNumbers(n-1);
    else
             return 1;
}

main() {
    int n;
    printf("Enter a a number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, multiplyNumbers(n));

}


