/*
Repeat array2 for a general input provided by the user using scanf.
*/
#include <stdio.h>

int main(){
    int arr[10];
    int n;

    printf("Enter the number for which you want the multiplication table: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n* (i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d X %d = %d \n", n, i+1, arr[i]);
    }

    return 0;
}