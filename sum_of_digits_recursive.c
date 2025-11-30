#include <stdio.h>

int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    }
    
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int num;
    
    printf("Input any number to find sum of digits: ");
    scanf("%d", &num);
    
    int sum = sumOfDigits(num);
    
    printf("The Sum of digits of %d = %d\n", num, sum);
    
    return 0;
}