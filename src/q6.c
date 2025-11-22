// Write a C program to find the length of a string without using the built-in string functions.
#include<stdio.h>
int main(){
    char string[100];
    int char_len=0;
    printf("enter a string: ");
    fgets(string,sizeof(string),stdin); // no scanf f here because first space it stops taking input by %s method
    while(string[char_len]!='\0'&&string[char_len]!='\n'){
        char_len += 1;
    }
    printf("length of string is: %d\n",char_len); //space is also counted as a character
    return 0;
}