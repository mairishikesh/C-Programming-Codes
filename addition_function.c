#include <stdio.h>

int add(int a, int b) {
    int result = a + b;
    return result;
}

int main() {
    int sum1 = add(25, 55);
    int sum2 = add(5, 10);
    int sum3 = add(100, 200);
    
    printf("The sum of 25 and 55 is: %d\n", sum1);
    printf("The sum of 5 and 10 is: %d\n", sum2);
    printf("The sum of 100 and 200 is: %d\n", sum3);
    
    return 0;
}