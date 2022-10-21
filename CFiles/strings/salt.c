/*
    write a program to input a password from the user and print the final password by adding 123 at the end
*/

#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char password[100];
    printf("ENter your passoword : ");
    scanf("%s", password);
    strcat(password, "123");
    puts(password);

    return 0;
}
