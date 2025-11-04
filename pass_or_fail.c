#include <stdio.h>
int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);
    
    if (score >= 40) {
        printf("Student has Passed\n");
    }
    else {
        printf("Student has Failed\n");
    }
    
    return 0;
}