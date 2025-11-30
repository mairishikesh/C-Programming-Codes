#include <stdio.h>

int findMax(int arr[], int size) {
    if (size <= 0) {
        return -1;
    }

    int max = arr[0];
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int numbers[] = {23, 67, 5, 89, 12, 54, 31};
    
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    int maxVal = findMax(numbers, size);
    printf("The largest element in the array is: %d\n", maxVal);
    
    return 0;
}