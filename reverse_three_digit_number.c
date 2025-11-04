#include <stdio.h>
int main() {
    int num, digit1, digit2, digit3, reversed;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    digit1 = num % 10;
    digit2 = (num / 10) % 10;
    digit3 = num / 100;
    reversed = (digit1 * 100) + (digit2 * 10) + digit3
    printf("The reversed number is: %d\n", reversed);
    
    return 0;
}