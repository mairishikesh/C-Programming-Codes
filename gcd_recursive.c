#include <stdio.h>

int gcd(int a, int b) {
    if (a == b) {
        return a;
    }
    
    if (a > b) {
        return gcd(a - b, b);
    } else {
        return gcd(a, b - a);
    }
}

int main() {
    int num1, num2;
    
    printf("Input 1st number: ");
    scanf("%d", &num1);
    
    printf("Input 2nd number: ");
    scanf("%d", &num2);
    
    int result = gcd(num1, num2);
    
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    
    return 0;
}