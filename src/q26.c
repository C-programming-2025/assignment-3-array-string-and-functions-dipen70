// Write a recursive function named reverseString that takes a string as input and returns the reversed string.
#include <stdio.h>
#include <string.h>
void reverseString(char str[], int i, int j) {
    if (i >= j) {
        return; 
    }

    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    reverseString(str, i + 1, j - 1);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int n = strlen(str);
    reverseString(str, 0, n - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}