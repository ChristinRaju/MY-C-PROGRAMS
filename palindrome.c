//Write a C program to check if a given number is a palindrome.

#include<stdio.h>
int main()
{
    int n, original, rem, rev = 0;

    printf("enter n\n");
    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }

        if (original == rev)
        {
            printf("%d is a palindrome\n", original);
        }
        else
        {
                printf("%d is not a palindrome\n", original);
        }
        return 0;    
}
