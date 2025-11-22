#include <stdio.h>

int isPalindrome(char str[]) {
    int char_len = 0;
    int i;

    while (str[char_len] != '\0' && str[char_len] != '\n') //calculating actual length excluding newline or null 
    {
        char_len++;
    }

    for (i = 0; i < char_len; i++) // to compare the first and last characters moving towards the center
    {
        if (str[i] != str[char_len - i - 1]) // if even a single mismatch is found not palindrome
        {
            return 0; // 0 is false
        }
    }
    return 1; // 1 for true
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    if (isPalindrome(input)) //passing the string to the function by input variable
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
