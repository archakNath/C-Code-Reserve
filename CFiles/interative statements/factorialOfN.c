/*
    Q. Print the factorial of n
        input the value of n
        run a loop from 1 to n
        find and print the product
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, p = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        p*=i;
    }

    printf("The factorial is %d.", p);
    
    return 0;
}
