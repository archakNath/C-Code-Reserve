#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("You are an adult.");
    } else if((age>=13)&&(age<18)){
        printf("You are a teenager.");
    } else{
        printf("You are a child.");
    }
    return 0;
}
