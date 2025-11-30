#include <stdio.h>
#include <string.h>

void reverseString(char str[], int index) {
    if (index < 0) {
        return;
    }
    
    printf("%c", str[index]);
    reverseString(str, index - 1);
}

int main() {
    char str[100];
    
    printf("Input any string: ");
    scanf("%s", str);
    
    int len = strlen(str);
    
    printf("The reversed string is: ");
    reverseString(str, len - 1);
    printf("\n");
    
    return 0;
}