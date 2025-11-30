#include <stdio.h>

void calSquare(int num) {
    printf("The square of %d is: %d\n", num, num * num);
}

int main() {
    calSquare(22);
    calSquare(66);
    calSquare(99);
    return 0;
}