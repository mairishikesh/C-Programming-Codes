#include <stdio.h>

void isPositive(int num) {
    if (num > 0) {
        printf("The number %d is positive.\n", num);
    }
    if (num <= 0) {
        printf("The number %d is not positive.\n", num);
    }
}

int main() {
    isPositive(12);
    isPositive(-8);
    isPositive(0);
    isPositive(47);
    return 0;
}