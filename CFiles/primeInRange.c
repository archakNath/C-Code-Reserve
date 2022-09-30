/*
    Q. Print all prime numbers in range
        input the starting and ending number
        check each numeber wherter its prime or not
        print the number is condition is true
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int flag = 1, m, n;
    printf("Enter starting number: ");
    scanf("%d", &m);
    printf("Enter ending number: ");
    scanf("%d", &n);

    for (int j = m; j <= n; j++)
    {
        flag = 1;
        for (int i = 2; i*i <= j; i++)
        {
            if(j%i==0){
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("%d ", j);
    }
    
    return 0;
}
