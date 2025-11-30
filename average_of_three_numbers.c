#include <stdio.h>

float average(float a, float b, float c) {
    float sum = a + b + c;
    float avg = sum / 3;
    return avg;
}

int main() {
    float num1 = 12.5, num2 = 18.0, num3 = 21.5;
    
    float result = average(num1, num2, num3);
    
    printf("The average of %.2f, %.2f and %.2f is: %.2f\n", num1, num2, num3, result);
    
    float x = 45.0, y = 60.0, z = 75.0;
    printf("The average of %.2f, %.2f and %.2f is: %.2f\n", x, y, z, average(x, y, z));
    
    return 0;
}