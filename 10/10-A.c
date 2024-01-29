#include <stdio.h>
#include <string.h>

int isPalindrome(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Palindrome
}

int main() {
    char str[100] = "madam";
    printf("The given string is = %s\n", str);
    if (isPalindrome(str)==1) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
