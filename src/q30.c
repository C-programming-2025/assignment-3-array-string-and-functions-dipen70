//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
#include <stdio.h>
#include <string.h>

int countOccurrencesRecursive(char str[], char target_char, int i) 
{
    if (str[i] == '\0') 
    {
        return 0; 
    }
    if (str[i] == target_char) 
    {
        return 1 + countOccurrencesRecursive(str, target_char, i + 1);
    } 
    else 
    {
        return countOccurrencesRecursive(str, target_char, i + 1);
    }
}
int countOccurrences(char str[], char target_ch) 
{
    return countOccurrencesRecursive(str, target_ch, 0);
}

int main() {
    char str[100], target_char;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to count: ");
    scanf("%c", &target_char);

    int result = countOccurrences(str, target_char);
    printf("Character '%c' appears %d times in the string.\n", target_char, result);

    return 0;
}
