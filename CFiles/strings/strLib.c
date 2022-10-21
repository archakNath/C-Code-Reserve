#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char name[] = "";
    char *change;
    printf("Enter your name: ");
    scanf("%s", change);
    strcpy(name, change);
    printf("you name is ");
    for (int i = 0; name[i]!='\0'; i++)
    {
        printf("%c", name[i]);
    }
    
    return 0;
}
