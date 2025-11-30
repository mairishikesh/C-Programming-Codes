#include <stdio.h>

int findMin(int a, int b) {
    int min;
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    return min;
}

int main() {
    int minVal = findMin(25, 17);
    printf("The smaller of 25 and 17 is: %d\n", minVal);
    
    int a = 42, b = 68;
    printf("The smaller of %d and %d is: %d\n", a, b, findMin(a, b));
    return 0;
}