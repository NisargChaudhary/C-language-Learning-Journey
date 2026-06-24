#include<stdio.h>
#include<string.h>
int main()
{
    int length=10;
    int width=5;
    int area;
    int *ptrl=&length;
    int *ptrw=&width;
    int *ptrarea=&area;
    *ptrarea=(*ptrl)*(*ptrw);
    printf("Area of rectangle: %d", *ptrarea);
    return 0;
}