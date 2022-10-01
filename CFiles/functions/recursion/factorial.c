/*
    Q. Write a program to find and print the factorial 
    on user entered value and print the result using recursive function
*/

#include<stdio.h>

//function prototype
int fact(int n);

//main function
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The factorial of %d is ", num);
    printf("%d. \n", fact(num));
    return 0;
}

//function defination
int fact(int n){
    if (n == 1)
    {
        return 1;
    }
    return n*fact(n-1);
}