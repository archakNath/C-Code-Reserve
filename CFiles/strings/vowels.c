#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str[100], ch;
    int count = 0;
    printf("ENter a string value: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            count++;
        }
        
    }
    printf("There are %d vowels in the entered string.", count);
    return 0;
}
