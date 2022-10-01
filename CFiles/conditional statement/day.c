/*
    WAP to print day name based on entered number(1-7) or character
    input index of day(1-7) or character
    print the day accordingly
    give an appropriate error message for wrong input
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int day;
    printf("Enter a number(1-7) for day: ");
    scanf("%d", &day);

    //switch case for input in number
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
        default: printf("Invalid input \n");
    }
    
    //switch case for input in character
    printf("Enter character for day: ");
    char ch;
    scanf(" %c", &ch);

    switch (ch)
    {
        case 'm': printf("Monday \n");
                break;
        case 't': printf("Tuesday \n");
                break;
        case 'w': printf("Wednesday \n");
                break;
        case 'T': printf("Thursday \n");
                break;
        case 'f': printf("Friday \n");
                break;
        case 's': printf("Saturday \n");
                break;
        case 'S': printf("Sunday \n");
                break;
        default: printf("Invalid input \n");
    }
    printf("Thank you :)");

    return 0;
}
