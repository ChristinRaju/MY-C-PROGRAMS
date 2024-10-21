//Write a C program to swap two numbers without using a temporary variable

#include<stdio.h>
int main()
{
    int num1, num2;

    printf("enter first number:\n");
    scanf("%d", &num1);

    printf("enter second number:\n");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("the first number is %d:\n", num1);
    printf("the second number is %d:\n", num2);

    return 0;
}
