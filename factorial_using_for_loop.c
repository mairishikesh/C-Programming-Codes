#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = n; i >= 1; i--) {
            factorial = factorial * i;
        }
        printf("Factorial of %d (%d!) is: %lld\n", n, n, factorial);
    }

    return 0;
}