#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    
    return n * factorial(n - 1);
}

int main() {
    int num;
    
    printf("Input a number : ");
    scanf("%d", &num);
    
    long long result = factorial(num);
    
    printf("The Factorial of %d is : %lld\n", num, result);
    
    return 0;
}