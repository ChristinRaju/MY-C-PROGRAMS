//Write a C program to determine whether a given number is even or odd.

#include<stdio.h>
int main()
{
    int num;

    printf("enter an number\n");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("the number %d is even\n", num);

        else
        {
            printf("the number %d is odd\n", num);
        }

        return 0;
}
