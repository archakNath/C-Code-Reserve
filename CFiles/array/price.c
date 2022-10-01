/*
    Q. Write a program to enter the price of three items and print their final cost with gst.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float price[3];
    printf("Enter the price of first item: ");
    scanf("%f", &price[0]);
    printf("Enter the price of second item: ");
    scanf("%f", &price[1]);
    printf("Enter the price of third item: ");
    scanf("%f", &price[2]);

    for (int i = 0; i < 3; i++)
    {
        price[i] += .18*price[i];
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("The final price of %dth item is %f \n", i, price[i]);
    }
    
    
    return 0;
}
