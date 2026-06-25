/*
In this challenge, create an array of size  dynamically, and read the values from stdin. 
Iterate the array calculating the sum of all elements. 
Print the sum and free the memory where the array is stored.
While it is true that you can sum the elements as they are read, without first storing them to an array, but you will not get the experience working with an array. 
Efficiency will be required later.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;
    long long sum = 0;

    // Read the size of the array
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Read values into the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("%lld\n", sum);

    // Free the allocated memory
    free(arr);

    return 0;
}