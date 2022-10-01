/*
    Q. Use library functions to find 
    the square of a number given by the user

        input a number
        use pow function from math library
        print the final value
*/

#include<math.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num); 

    printf("The square is %f.", pow(num, 2));
    return 0;
}
