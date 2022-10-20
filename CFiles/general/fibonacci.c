#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: \n");
    if (n >= 1)
    {
        printf("0\t");
        if (n>=2)
        {
            printf("1\t");
            for (int i = 0; i < n-2; i++)
            {
                c = a+b;
                printf("%d\t", c);
                a = b;
                b = c;
            }
            
        }
        
    }
    
    return 0;
}
