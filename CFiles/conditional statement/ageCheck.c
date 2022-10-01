/*
    simple program to check age
    input the age of the user
    print appropriate message
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    //condition checking using if elseif else
    if(age>=18){
        printf("You are an adult.");
    } else if((age>=13)&&(age<18)){
        printf("You are a teenager.");
    } else{
        printf("You are a child.");
    }

    //ternery operator
    (age>=18)?printf("you are an adult"):printf("you are not an adult");

    return 0;
}
