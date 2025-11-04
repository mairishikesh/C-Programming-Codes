#include <stdio.h>
int main() {
    int N, i, sum;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    sum = 0;
    i = 1;
    while (i <= N) {
        sum = sum + i;
        i = i + 1
    }
    printf("The sum of first %d natural numbers is: %d\n", N, sum);
    
    return 0;
}