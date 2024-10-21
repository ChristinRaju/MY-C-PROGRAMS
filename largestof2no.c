//Write a C program to compare two integers and determine which one is larger, or if they are equal.

#include<stdio.h>
int main()
{
    int A, B;

    printf("enter values of A and B:\n");
    scanf("%d %d", &A, &B);

    if(A == B)
        printf("Both A and B are equal:\n");

    else if(A > B)
        printf("A is the largest:\n");

    else
        printf("B is the largest:\n");

    return 0;
}
