#include <stdio.h>

void printNaturalNumbers(int current, int limit) {
    if (current > limit) {
        return;
    }
    
    printf("%d  ", current);
    
    if (current % 10 == 0) {
        printf("\n");
    }
    
    printNaturalNumbers(current + 1, limit);
}

int main() {
    printf("The natural numbers are : ");
    printNaturalNumbers(1, 50);
    printf("\n");
    return 0;
}