/*
Create an array of 3 numbers. Point a pointer at the very first number. 
Then, "add 1" to the pointer and see what it points to next.*/
#include<stdio.h>
int main()
{
    int arr[3] = {10, 20, 30};
    int *p = &arr[0];
    printf("Initial value pointed to: %d\n", *p);
    printf("Initial memory address: %p\n", p);
    p=p+1;
    printf("Value pointed to after adding 1: %d\n", *p);
    printf("Memory address after adding 1: %p\n", p);
    return 0;

}