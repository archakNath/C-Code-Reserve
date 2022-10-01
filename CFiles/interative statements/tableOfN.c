/*
    Print the table of n
    input the value of n
    print the table of entered value till the 10th term
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n; 
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i < 11; i++)
    {
        printf("%d ", i*n);
    }
    
    return 0;
}
