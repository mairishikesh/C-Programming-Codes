#include <stdio.h>
#include <string.h>
int main() {
    char password[50];
    
    do {
        printf("Enter the password: ");
        scanf("%s", password);
    } while (strcmp(password, "secret123") != 0);
    printf("Access granted.\n");
    
    return 0;
}