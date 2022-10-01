/*
    Q. Write a function to calculate the sum, product and average of 
    two numbers. Print that average in the main function.
*/

#include<stdio.h>

//function prototype
void compute(int a, int b, int *avg, int *sum, int *pro);

//main function
int main(int argc, char const *argv[])
{
    int a, b, avg, sum, pro;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    compute(a, b, &avg, &sum, &pro);

    printf("Sum : %d, Average: %d, Product: %d", sum, avg, pro);
    return 0;
}

//function defination
void compute(int a, int b, int *avg, int *sum, int *pro){
    *pro = a * b;
    *sum = a + b;
    *avg = (a + b)/2;
}