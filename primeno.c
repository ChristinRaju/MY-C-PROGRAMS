//Write a C program to check if a given number is a prime number.

#include<Stdio.h>
int main()
{
    int num, i;

    printf("enter any number\n");
    scanf("%d", &num);

    if(num < 2)
    {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            printf("%d is not a prime number.\n", num);
            return 0;
        }
    }

    printf("%d is a prime number.\n", num);
    return 0;

}    
