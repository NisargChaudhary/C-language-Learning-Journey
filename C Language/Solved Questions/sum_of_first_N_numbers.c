#include<stdio.h>
int main()
{
    int i,n,x=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        x=x+i;
    }
    printf("Sum of first %d numbers is %d\n",n,x);
    return 0;
}