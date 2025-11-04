#include <stdio.h>
int main() {
    int N, i, sum;
    sum = 0;
    
    printf("Enter a positive number N: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        sum = sum + i
    }
    
    printf("The sum of the first %d integers is: %d\n", N, sum);
    
    return 0;
}