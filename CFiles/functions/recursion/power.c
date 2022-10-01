/*
    Q. Write a program to make your own power function
*/

#include<stdio.h>

//function prototype
int powers(int m, int n);

//main function
int main(int argc, char const *argv[])
{
    int num, pow;
    printf("Enter a number: ");
    scanf("%d", &num); 
    printf("Enter power: ");
    scanf("%d", &pow); 

    printf("The value of %d raised to the power ", num);
    printf("%d is ", pow);
    printf("%d. \n", powers(num, pow));

    return 0;
}

//function defination
int powers(int m, int n){
    if (n == 0)
    {
        return 1;
    }
    return m*powers(m, n-1);
}