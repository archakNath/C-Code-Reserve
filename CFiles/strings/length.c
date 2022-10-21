/*
    Write a program to input user's name and print the length of his name
*/

#include<stdio.h>

//fucntion prototype
int strLength(char arr[]);

//main function
int main(int argc, char const *argv[])
{
    char name[100];
    printf("Enter your name: ");
    fgets(name, 100, stdin);
    printf("Your name is ");
    puts(name);

    printf("There are %d characters in your name.", strLength(name));
    return 0;
}

//function defination
int strLength(char arr[]){
    int i;
    for (i = 0; arr[i] != '\0'; i++){}
    return (i-1);
}