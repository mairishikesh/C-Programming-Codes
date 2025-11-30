#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    
    int prime = 1;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }
    
    return prime;
}

int main() {
    int num1 = 29;
    int num2 = 36;

    if (isPrime(num1)) {
        printf("%d is a prime number.\n", num1);
    } else {
        printf("%d is not a prime number.\n", num1);
    }
    
    if (isPrime(num2)) {
        printf("%d is a prime number.\n", num2);
    } else {
        printf("%d is not a prime number.\n", num2);
    }
    
    return 0;
}