/*
Repeat array6 for a custom input given by the user.
*/
#include <stdio.h>

int main()
{
    int arr[3][10];
    int mul[3];

    printf("Enter 3 numbers for which you want the multiplication tables: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &mul[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}