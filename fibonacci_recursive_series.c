#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;
    
    printf("Input number of terms for the Series (< 20) : ");
    scanf("%d", &terms);
    
    printf("The Series are :\n");
    
    for (int i = 1; i <= terms; i++) {
        printf("%d  ", fibonacci(i));
    }
    
    printf("\n");
    
    return 0;
}