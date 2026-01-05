#include <stdio.h>
int main(){
    float a, b, sum, product, remainder;
    printf("Enter two floats numbers: ");
    scanf("%f %f", &a, &b);
    sum = a + b;
    printf("The sum of %f and %f is %f\n", a, b, sum);
    product = a * b;
    printf("The product of %f and %f is %f\n", a, b, product);
    remainder = (int)a % (int)b;
    printf("The remainder of %f divided by %f is %f\n", a, b, remainder);
    return 0;
}