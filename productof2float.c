#include<stdio.h>
int main()
{
    float num1, num2, multiply;

    printf("enter first number:\n");
    scanf("%f", &num1);

    printf("enter second number:\n");
    scanf("%f", &num2);

    multiply = num1 * num2;

    printf("the product of %f and %f is %f", num1, num2, multiply);

    return 0;
}