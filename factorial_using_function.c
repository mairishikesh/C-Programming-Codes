#include <stdio.h>

void factorial(int n) {
    long long fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    
    printf("The factorial of %d is: %lld\n", n, fact);
}

int main() {
    int num1 = 7;
    factorial(num1);
    
    int num2 = 10;
    factorial(num2);
    
    factorial(5);
    
    return 0;
}