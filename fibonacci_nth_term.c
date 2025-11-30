#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    
    int first = 1;
    int second = 1;
    int result;
    
    for (int i = 3; i <= n; i++) {
        result = first + second;
        first = second;
        second = result;
    }
    
    return result;
}

int main() {
    int term = 8;
    printf("The %dth Fibonacci number is: %d\n", term, fibonacci(term));
    
    term = 12;
    printf("The %dth Fibonacci number is: %d\n", term, fibonacci(term));
    
    term = 6;
    printf("The %dth Fibonacci number is: %d\n", term, fibonacci(term));
    
    return 0;
}