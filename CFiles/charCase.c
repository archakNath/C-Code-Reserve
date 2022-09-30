/*
    check whether entered character is upper case or not
    input a character
    check the condition
    print appropriate message
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    //if statement
    if(ch>='A' && ch<='Z'){
        printf("%c is an upper case character.", ch);
    } else{
        printf("%c is not an upper case character.", ch);
    }
    return 0;
}
