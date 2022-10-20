#include<stdio.h>

//function prototype
int countOdd(int arr[], int n);
void inputArray(int *ptr, int n);

//main function
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int array[n];
    inputArray(&array, n);
    printf("There are %d odd numbers in the entered array.", countOdd(array, n));
    return 0;
}

//function defination
int countOdd(int arr[], int n){
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            counter++;
        }
        
    }
    
    return counter;
}

void inputArray(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for %dth index: ", i);
        scanf("%d", (ptr+i));
    }
}