#include <stdio.h>

int sumRecursive(int current, int n) {
    if (current > n) {
        return 0;
    }
    
    return current + sumRecursive(current + 1, n);
}

int main() {
    int n;
    
    printf("Input the last number of the range starting from 1 : ");
    scanf("%d", &n);
    
    int result = sumRecursive(1, n);
    
    printf("The sum of numbers from 1 to %d :\n", n);
    printf("%d\n", result);
    
    return 0;
}