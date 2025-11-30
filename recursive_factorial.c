#include <stdio.h>

long long recursiveFactorial(int n) {
    if (n < 0) {
        return -1;
    }
    
    if (n == 0 || n == 1) {
        return 1;
    }
    
    return (long long)n * recursiveFactorial(n - 1);
}

int main() {
    int factNum = 7;
    long long factorial = recursiveFactorial(factNum);
    printf("The factorial of %d is: %lld\n", factNum, factorial);
    
    factNum = 12;
    factorial = recursiveFactorial(factNum);
    printf("The factorial of %d is: %lld\n", factNum, factorial);
    
    return 0;
}