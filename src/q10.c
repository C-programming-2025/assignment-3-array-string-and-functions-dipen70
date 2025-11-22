// Write a C program to concatenate two strings without using the built-in string functions.
#include <stdio.h>
int main() {
    char string1[100], string2[100];
    int length1 = 0, length2 = 0;
    int i, j;

    printf("Enter the first string: ");
    fgets(string1, sizeof(string1), stdin);
    while (string1[length1] != '\0' && string1[length1] != '\n') {
        length1++;
    }

    printf("Enter the second string: ");
    fgets(string2, sizeof(string2), stdin);
    while (string2[length2] != '\0' && string2[length2] != '\n') {
        length2++;
    }

    for (i = 0; i < length2; i++) // using len2 because we need to copy all characters of string2 and len1 is constant here
    {
        string1[length1 + i] = string2[i];
    }
// to add where string ends, i.e null character
    string1[length1 + length2] = '\0';

    printf("Concatenated string: %s\n", string1);

    return 0;
}