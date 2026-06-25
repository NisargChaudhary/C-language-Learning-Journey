#include<stdio.h>
int main()
{
    int a=99;
    int b=11;
    int *p1=&a;
    int *p2=&b;
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("a is now: %d \n", a);
    printf("b is now: %d \n", b);
    return 0;
}