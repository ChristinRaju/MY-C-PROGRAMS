//C program to read a number and print integers up to that number;

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop from 1 to the entered number
    for (int i = 1; i <= n; i++) 
    {
        printf("%d\n", i);  
    }

    return 0;
}
