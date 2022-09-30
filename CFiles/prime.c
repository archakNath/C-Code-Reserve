/*
    Q. Check whether a number is a prime number or not.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, flag = 1;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 2; i*i <= n; i++)
    {
        if(n%i==0){
            flag = 0;
            break;
        }
    }
    if(flag){
        printf("%d is a prime number.", n);
    } else {
        printf("%d is not a prime number.", n);
    }
    
    return 0;
}
