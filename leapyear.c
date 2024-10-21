//Write a C program to determine if a given year is a leap year.

#include<stdio.h>
int main()
{
    int year;

    printf("enter any year:\n");
    scanf("%d", &year);

    if(year %4 == 0)
        printf("the given year is a leap year:\n");

    else
        printf("not a leap year:\n");

    return 0;

}
