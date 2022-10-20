/*
    Q. Write a program to input to input 10 values to an array using the concept of pointer.
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10];
    int *ptr = &arr;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value for the %dth index: ", i);
        scanf("%d", (ptr+i));
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
