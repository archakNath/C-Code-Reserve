/*
    Enter address(house no, block, city, state) of 5 people
*/

#include<stdio.h>
#include<string.h>

//structure declaration
typedef struct addressOfResidents
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
} add;

//function prototype
void printInfo(add ad);

//main function
int main(int argc, char const *argv[])
{
    add ad[5];
    int hno, blo;
    char cty[100], state[100];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter your house number: ");
        scanf("%d", &ad[i].houseNo);
        printf("Enter your block number: ");
        scanf("%d", &ad[i].block);
        printf("Enter your city name: ");
        scanf("%s", &ad[i].city);
        printf("Enter your state: ");
        scanf("%s", &ad[i].state);
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++)
    {
        printInfo(ad[i]);
    }
    
    return 0;
}

//fucntion defination
void printInfo(add ad){
    printf("House No.%d, Block no.%d, %s, %s\n", ad.houseNo, ad.block, ad.city, ad.state);
}