/*
    Q. Write a program to print Namaste is user is Indian or Bounjour if user is French(use function)
*/

#include<stdio.h>

//funtion declaration/prototype
void hello(char ch);

//main function
int main(int argc, char const *argv[])
{
    printf("Enter i for Indian and f for French: ");
    char c;
    scanf(" %c", &c);
    hello(c);
    return 0;
}

//function defination
void hello(char ch){
    if (ch == 'i' || ch == 'I')
    {
        printf("Namaste");
    } else if (ch == 'f' || ch == 'F')
    {
        printf("Bonjour");
    } else {
        printf("Wrong input");
    } 
}