// Write a recursive function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.
#include <stdio.h>
#include <string.h>

int isPalindromeRecursive(char str[], int i, int j) {
    if (i >= j) {
        return 1;
    }
    if (str[i] != str[j]) {
        return 0;
    }
    return isPalindromeRecursive(str, i + 1, j - 1);
}

int isPalindrome(char str[]) {
    int length = strlen(str);
    if (length == 0) {
        return 1;
    }
    return isPalindromeRecursive(str, 0, length - 1);
}

int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    if (isPalindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
       printf("The string \"%s\" is not a palindrome.\n", str);
    }
    return 0;
}
