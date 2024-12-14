//Write a C program to add to numbers using pointers

#include<stdio.h>
int main(){

    int *p, *q, r, a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a; //address of a
    q = &b; //address of b

    r = *p + *q;

    printf("Sum of two numbers: %d", r);

    return 0;
}