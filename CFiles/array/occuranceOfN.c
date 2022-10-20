#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter values of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Check the occurance of : ");
    int num;
    scanf("%d", &num);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
        
    }

    printf("%d has occured %d times in the following array.", num, count);
    
    
    return 0;
}
