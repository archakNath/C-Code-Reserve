/*
    Q. Print all the odd numbers from 5 to 50.(use of continue necessary)
    run a loop from 5 to 50
    contintue statement whenever there is even number
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 5; i < 51; i++)
    {
        if (i%2==0)
        {
            continue;
        }

        printf("%d ", i);
        
    }
    
    return 0;
}
