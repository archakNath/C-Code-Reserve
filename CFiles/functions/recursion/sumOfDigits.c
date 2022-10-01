/*
    Q. Write a program to find the sum of digits of a number
*/

#include<stdio.h>

//function prototype
int sum(int n);

//main function
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The sum of digits of %d is ", num);
    printf("%d. \n", sum(num));
    return 0;
}

//function defination
int sum(int n){
    if (n == 0)
    {
        return 0;
    }
    return (n%10)+sum(n/10);
}