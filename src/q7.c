#include<stdio.h>
int main(){
    char string[100];
    int char_len=0;
    int i;
    printf("enter a string: ");
    fgets(string,sizeof(string),stdin);
    while(string[char_len]!='\0'&&string[char_len]!='\n'){
        char_len += 1;
    }
    printf("length of string is: %d\n",char_len); //space is also counted as a character

    // now that we have actual lenght with only characters entered counted
    char rev_string[char_len+1]; // null character also to be stored that's why +1
    for (i=0;i<char_len;i++){
        rev_string[i]=string[char_len-i-1];
    }
    // after the loop ends the string is reversed but we need to add null character at the end to mark the end of string
    rev_string[char_len]='\0'; // null character at the end of string used only to mark the end of string
    printf("Reversed string is: %s\n",rev_string);
    return 0;
}
