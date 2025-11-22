// Write a C program to check if a given string is a palindrome.
#include <stdio.h>
#include <string.h> 
int main (){
    char String[100];
    int char_len=0;
    int i, palindrome=1;
    printf("enter a string: ");
    fgets(String,sizeof(String),stdin);
    while(String[char_len]!='\0'&&String[char_len]!='\n')// we stop counting at a null character or new line change (enter key) and find the actual lenght of string

    {
        char_len += 1;
    } 
    for (i=0;i<char_len;i++){
        if (String[i]!=String[char_len-i-1]){// comparing characters from start and end towards the center
            palindrome=0; // because it was set to 1 ( true) even a single mismatch makes it false program will run until the end of string or until a mismatch is found
            break;
        }
    }
    if (palindrome){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }
    return 0;
}