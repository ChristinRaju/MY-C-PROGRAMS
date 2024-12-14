//C Program to Swap two numbers using Pointers

#include<stdio.h>
int main(){

    int a = 10, b = 20, *p, *q, temp;
    p = &a;
    q = &b;

    printf("Enter two number: ");
    scanf("% %d, &a, &b");
    temp = *p;
    *p = *q;
    *q = temp;

    printf("After Swapping: %d %d", *p, *q);

    return 0;
}