#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    float *ptr = (float *)malloc(5*sizeof(float));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value for index %d: ", i);
        scanf("%f", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%f\t", ptr[i]);
    }
    
    
    return 0;
}
