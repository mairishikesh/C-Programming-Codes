#include <stdio.h>
int main() {
    float a, b, c, x;
    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    x = a / b - c;
    printf("The value of x is: %.2f\n", x);
    
    return 0;
}