/*
    Write a function that doubles a person's bank balance, 
    but do it using pointers so the change is permanent in main().
*/ 
 #include<stdio.h>
void double_balance(int *p)
{
    *p = *p * 2;
}
int main()
{
    int balance = 1000;
    printf("Initial balance: %d\n", balance);
    double_balance(&balance);
    printf("Doubled balance: %d\n", balance);
    return 0;
}