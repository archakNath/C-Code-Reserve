/*
    WAP to print day name based on entered number(1-7)
    input index of day(1-7)
    print the day accordingly
    give an appropriate error message for wrong input
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int day;
    printf("Enter a number(1-7) for day: ");
    scanf("%d", &day);

    switch (day)
    {
        case 1: printf("Monday \n");
                break;
        case 2: printf("Tuesday \n");
                break;
        case 3: printf("Wednesday \n");
                break;
        case 4: printf("Thursday \n");
                break;
        case 5: printf("Friday \n");
                break;
        case 6: printf("Saturday \n");
                break;
        case 7: printf("Sunday \n");
                break;
        default: printf("Invalid input");
    }
    return 0;
}
