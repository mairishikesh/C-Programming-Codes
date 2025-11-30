#include <stdio.h>

int countDigits(int num) {
    if (num == 0) {
        return 0;
    }
    
    return 1 + countDigits(num / 10);
}

int main() {
    int num;
    
    printf("Input a number : ");
    scanf("%d", &num);
    
    int count;
    
    if (num == 0) {
        count = 1;
    } else {
        count = countDigits(num);
    }
    
    printf("The number of digits in the number is : %d\n", count);
    
    return 0;
}