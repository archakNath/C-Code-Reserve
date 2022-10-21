/*
    Write a program to take two vectors and print the sum of both the vectors
*/

#include<stdio.h>

//structure declaration
struct vector
{
    int x;
    int y;
};

//function defination
void display(struct vector v1, struct vector v2);

//main function
int main(int argc, char const *argv[])
{
    struct vector v1;
    struct vector v2;

    printf("Enter coordinates for first vector: ");
    scanf("%d" ,&v1.x);
    scanf("%d" ,&v1.y);
    printf("Enter coordinates for second vector: ");
    scanf("%d" ,&v2.x);
    scanf("%d" ,&v2.y);

    display(v1, v2);

    return 0;
}


//fucntion defination
void display(struct vector v1, struct vector v2){
    struct vector res = {(v1.x+v2.x), (v1.y+v2.y)};
    printf("coordinates of the final vector is %di + (%dj).", res.x, res.y);
}