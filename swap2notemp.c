//Write a C program to swap two numbers using a temporary variable

#include<stdio.h>
int main()
{
    int num1, num2, temp;

    printf("enter the first number:\n");
    scanf("%d", &num1);

    printf("enter the second number:\n");
    scanf("%d", &num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("the first numbers is %d:\n", num1);
    printf("the second number is %d:\n", num2);

    return 0;

    }
