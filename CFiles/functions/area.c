/*
    Q. Write functions to calculate the area 
    of a square, a circle and a rectangle

        create three functions and use function overloading
        input value form the user using a switch case
        also use math(pow) function as well
*/

#include<math.h>
#include<stdio.h>

//function prototype
float area_r(int l, int b);
float area_s(int side);
float area_c(float r);

//main funtion
int main(int argc, char const *argv[])
{
    int choice, len, bth, side;
    float rad;
    printf("Enter for area of 1.rectangle 2.square 3.circle: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter length : ");
        scanf("%d", &len);
        printf("Enter breath : ");
        scanf("%d", &bth);
        printf("The area is %f square units.", area_r(len, bth));
        break;
    
    case 2:
        printf("Enter side of square : ");
        scanf("%d", &side);
        printf("The area is %f square units.", area_s(side));
        break;
    
    case 3:
        printf("Enter radius : ");
        scanf("%f", &rad);
        printf("The area is %f square units.", area_c(rad));
        break;
    
    default:
        printf("Wrong input");
    }
    return 0;
}

//function definations
float area_r(int l, int b){
    return l*b;
}

float area_s(int side){
    return side*side;
}

float area_c(float r){
    return 3.14*pow(r, 2);
}