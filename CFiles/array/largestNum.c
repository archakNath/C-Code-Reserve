#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter value into the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        max = (max<arr[i])?arr[i]:max;
    }

    printf("%d is the largest number in the user entered array.", max);
    
    
    return 0;
}
