//Write a C program to calculate the sum of the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i = 1, sum = 0;

    while(i<=10)
    {
        sum = sum + i;
        i = i + 1;
    }
        printf("sum = %d", sum);

    return 0;
}
