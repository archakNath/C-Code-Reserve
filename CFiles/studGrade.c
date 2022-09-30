/*
    Write a program to grade a student based on marks obtained
    input student marks
        marks<30: C
        marks>=30 and marks<70: B
        marks>=70 and marks<90: A
        marks>=90 and marks<=100: A+
    give message accordingly
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    //if statement
    if(marks<30){
        printf("Grade:C");
    } else if(marks<70){
        printf("Grade:B");
    } else if(marks<90){
        printf("Grade:A");
    } else if(marks<=100){
        printf("Grade:A+");
    } else{
        printf("Wrong input");
    }
    return 0;
}
