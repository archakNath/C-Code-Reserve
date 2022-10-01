/*
    keep taking number as input from user until user input odd number
    run an infinite loop
    break loop statement when user inputs odd number
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter value: \n");

    while(1){
        scanf("%d", &n);
        if (n%2==1)
            break;
    }
    printf("End");

    return 0;
}
