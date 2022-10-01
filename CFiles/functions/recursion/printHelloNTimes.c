/*
    Q. Write a program to print "hello" 
    multiple times using recursion
*/

#include<stdio.h>

//function prototype
void print(int count);

//main funtion
int main(int argc, char const *argv[])
{
    print(5);
    return 0;
}

//function defination
void print(int count){
    if (count == 0)     
    {
        return;
    }
    
    printf("hello\n");
    print(count-1);
}
