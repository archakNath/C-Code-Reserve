#include<stdio.h>
#include<string.h>

//structure declaration
typedef struct InformationTechnology
{
    char name[100];
    int roll;
    float cgpa;
} it;

//function defination
void printInfo(it s1);

//main function
int main(int argc, char const *argv[])
{
    it s1 = {"Archak Nath", 19, 9.5};
    printInfo(s1);
    return 0;
}


//function prototype
void printInfo(it s1){
    printf("Student details\n");
    printf("----------------\n");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CPGA: %f\n", s1.cgpa);
    printf("----------------\n");
}