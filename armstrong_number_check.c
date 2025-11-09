#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }

    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += (int)pow(remainder, n)
    }

    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}