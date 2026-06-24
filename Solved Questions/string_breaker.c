#include<stdio.h>
int main()
{
    char password[] = "SECRET";
    for(int i = 0; i < 6; i++)
    {
        printf("%c", password[i]);
        printf("\n");
        }
    return 0;
}
