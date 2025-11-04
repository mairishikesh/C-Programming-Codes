#include <stdio.h>
int main() {
    int N, i, factorial;
    printf("Enter a number: ");
    scanf("%d", &N);
    
    factorial = 1;
    i = 1;
    while (i <= N) {
        factorial = factorial * i;
        i = i + 1;
    }
    printf("The factorial of %d is: %d\n", N, factorial);
    
    return 0;
}