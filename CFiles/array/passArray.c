#include<stdio.h>

//function prototype
void printArray(int arr[], int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for %dth index: ", i);
        scanf("%d", &ar[i]);
    }

    printArray(ar, n);
    
    return 0;
}

// function defination
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
}