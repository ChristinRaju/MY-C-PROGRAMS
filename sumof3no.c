//Write a C program to calculate the sum of three integers and display the result.

#include<stdio.h>
int main()
{
    int n1, n2, n3, sum;

    printf("enter three numbers:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    sum = n1 + n2 + n3;

    printf("the sum of %d %d and %d is %d", n1, n2, n3, sum);
    
    return 0;
 }
