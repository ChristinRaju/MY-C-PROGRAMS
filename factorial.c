//Write a C program to calculate factorial of a number

#include <stdio.h>  

int main() 
{
    int num, i;
    int factorial = 1;
 
    printf("Enter a positive integer: ");
    scanf("%d", &num); 

    if (num < 0) 
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } 
        else 
        {
            for (int i = 1; i <= num; i++) 
            {  
                factorial = factorial * i;  
            }

            printf("Factorial of %d is: %d\n", num, factorial);
        }

    return 0;
}
