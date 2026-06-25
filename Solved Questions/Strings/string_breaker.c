#include<stdio.h>
int main()
{
    char password[] = "SECRET";
    for(int i = 0; password[i] != '\0'; i++)
    {
        printf("%c\n", password[i]);
    }
    return 0;
}
