// Implement a C program to count the occurrence of a specific character in a string.
#include <stdio.h>
int main() {
    char string[100];
    char count_char;
    int char_len = 0;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    // Calculate the actual length of the string excluding the null or new line change
    while (string[char_len] != '\0' && string[char_len] != '\n') {
        char_len += 1;
    }

    printf("Enter the character to count: "); // which character's occurrence to count
    scanf(" %c", &count_char);

    // Count occurrences of the target character, string works like an array of characters
    for (i = 0; i < char_len; i++) {
        if (string[i] == count_char) {
            count += 1;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", count_char, count);
    return 0;
}