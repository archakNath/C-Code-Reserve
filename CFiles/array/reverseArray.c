#include<stdio.h>

//function prototype
void input(int *ptr, int n);
void reverse(int *ptr, int n);
void printArr(int *ptr, int n);

//main function
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arrray[n];
    input(arrray, n);
    reverse(arrray, n);
    printArr(arrray, n);
    return 0;
}

//function defination
void input(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%dth index: ", i);
        scanf("%d", (ptr+i));
    }
    
}

void reverse(int *ptr, int n){
    int mid = (n+1) / 2;
    int temp;
    for (int i = 0; i < mid; i++)
    {
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+(n-i-1));
        *(ptr+(n-i-1)) = temp;
    }
    
}

void printArr(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr+i));
    }
}