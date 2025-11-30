#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char str1[] = "madam";
    char str2[] = "programming";
    
    if (isPalindrome(str1)) {
        printf("'%s' is a palindrome.\n", str1);
    } else {
        printf("'%s' is not a palindrome.\n", str1);
    }

    if (isPalindrome(str2)) {
        printf("'%s' is a palindrome.\n", str2);
    } else {
        printf("'%s' is not a palindrome.\n", str2);
    }
    
    return 0;
}