#include <stdio.h>

void printArray(int arr[], int size, int index) {
    if (index >= size) {
        return;
    }
    
    printf("%d  ", arr[index]);
    printArray(arr, size, index + 1);
}

int main() {
    int n;
    
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("The elements in the array are : ");
    printArray(arr, n, 0);
    printf("\n");
    
    return 0;
}