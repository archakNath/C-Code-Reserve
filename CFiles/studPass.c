/*
    Check whether a student passed or failed
    input the marks of the student
    check whether he passed or not
    print appropriate statement accordingly
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    //if statement
    if (marks>30)
    {
        printf("Student has passed");
    } else if(marks<=30) {
        printf("Student has failed");
    }
    
    return 0;
}
