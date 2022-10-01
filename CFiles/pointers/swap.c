/*
    Q. Write a program to swap the value of two variables
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 25, b = 38;
    printf("The value of a is %d \n", a);
    printf("The value of b is %d \n", b);

    int *aptr = &a;
    int *bptr = &b;

    //swaping happens here
    int temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;

    printf("\nThe value of a is %d and value of b is %d.", a, b);

    return 0;
}
