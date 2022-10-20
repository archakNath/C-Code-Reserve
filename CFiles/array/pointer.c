#include<stdio.h>

int main(int argc, char const *argv[])
{
    int var = 22;
    int *ptr = &var;
    printf("%u \n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr++;
    printf("%u", ptr);
    return 0;
}
