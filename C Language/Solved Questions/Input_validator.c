#include<stdio.h>
int main()
{
    int i;
    
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d",&i);
        printf("You entered: %d\n",i);
    } while (i!=0);
    printf("Exited the loop as you entered 0\n");
    return 0;
    
}

