#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter value for Box A: ");
    scanf("%d", &a);
    printf("Enter value for Box B: ");
    scanf("%d", &b);
    printf("\nBefore swapping:\n");
    printf("Box A = %d\n", a);
    printf("Box B = %d\n", b);
    
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping:\n");
    printf("Box A = %d\n", a);
    printf("Box B = %d\n", b);
    
    return 0;
}