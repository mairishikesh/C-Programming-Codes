#include <stdio.h>

void sayHello() {
    printf("Hello, welcome!\n\n");
}

int main() {
    sayHello();
    
    printf("Calling the function again:\n");
    sayHello();
    
    return 0;
}