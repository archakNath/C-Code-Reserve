/*
    Q. Print 0 to n using while
    input value of n from user
    print all the numbers including n
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter n: ");
    int n, c = 0;
    scanf("%d", &n);

    while (c<=n)
    {
        printf("%d ", c);
        c++;
    }
    
    return 0;
}
