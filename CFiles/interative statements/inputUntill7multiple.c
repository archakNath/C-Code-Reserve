/*
    Q. keep taking number input form user 
    until user enters number which is multiple of 7
        run an infinite loop
        break loop statement when condition is matched
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number: \n");
    while (1)
    {
        scanf("%d", &n);
        if (n%7==0)
        {
            break;
        }
    }

    printf("End");
    
    return 0;
}
