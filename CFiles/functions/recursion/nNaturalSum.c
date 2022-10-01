/*
    Q. Write a program to find the sum of n natural numbers using recursive function
*/

#include<stdio.h>

//function protocol
int sum(int n);

//main function
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The sum of %d natural numbers is ", num); printf("%d. \n", sum(num));
    return 0;
}

//function defination
int sum(int n){
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n-1);
    
}