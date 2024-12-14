//Write a C program to find the biggest among three numbers using pointer.

#include<stdio.h>
int main(){

    int num1, num2, num3, *p1, *p2, *p3, *largest;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    p1 = &num1;
    p2 = &num2;
    p3 = &num3;

    largest = p1;

    if(*p2 > *largest){
        largest = p2;
    }
        if(*p3 > *largest){
            largest = p3;
        }

        printf("The largest number is %d", *largest);

        return 0;

}
