/*
    Write a program to input a string, first index and last index and print a sliced string
*/

#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter first index: ");
    int n;
    scanf("%d", &n);
    printf("Enter last index: ");
    int m;
    scanf("%d", &m);

    for (int i = n; i<=m; i++)
    {
        printf("%c", str[i]);
    }
    
    return 0;
}
