#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter your full name: ");
    char name[100];
    fgets(name, 100, stdin);
    printf("User's name is ");
    puts(name);
    
    return 0;
}
