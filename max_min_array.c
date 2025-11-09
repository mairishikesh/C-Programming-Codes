#include <stdio.h>

int main() {
    int arr[] = {45, 12, 88, -5, 100, 2, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    
    int max = arr[0];
    int min = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Array: 45, 12, 88, -5, 100, 2, 50\n");
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    return 0;
}