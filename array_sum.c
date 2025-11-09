#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int i;
    int size = 5;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}