#include <stdio.h>
int main() {
    float principal, rate, time, SI;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period: ");
    scanf("%f", &time);
    
    SI = (principal * rate * time) / 100;
    printf("The Simple Interest is: %.2f\n", SI);
    
    return 0;
}