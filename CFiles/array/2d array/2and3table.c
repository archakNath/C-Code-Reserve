#include <stdio.h>

int main()
{
    int tables[2][10];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tables[i][j] = (i+2)*(j+1);
        }
        
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", tables[i][j]);
        }
        printf("\n");
    }

    return 0;
}
