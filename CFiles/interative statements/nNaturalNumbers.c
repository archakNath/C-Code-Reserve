/*
    Print n natural numbers and also print them in reverse
    input value of n
    print all numbers from 1 to n
    then print all number from n to 1(reverse)
    also print sum of n natural numbers
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, c = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int sum = 0;

    //print 1 to n
    printf("All natural numbers till n. \n");
    do
    {
        printf("%d ", c);
        c++;
    } while (c<=n);
    printf("\n");

    //print n to 1
    printf("All natural numbers from n in reverse. \n");
    while (n>=1)
    {
        printf("%d ", n);
        sum+=n;
        n--;
    }
    
    //sum of n natural numbers
    printf("The sum of natural numbers is %d.", sum);
    
    return 0;
}
