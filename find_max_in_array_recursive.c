#include <stdio.h>

int findMaxRecursive(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    
    int maxOfRest = findMaxRecursive(arr, n - 1);
    
    if (arr[n - 1] > maxOfRest) {
        return arr[n - 1];
    } else {
        return maxOfRest;
    }
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
    
    int max = findMaxRecursive(arr, n);
    
    printf("Largest element of an array is: %d\n", max);
    
    return 0;
}