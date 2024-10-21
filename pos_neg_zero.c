//Write a C program to check if a given number is positive, negative, or zero.

#include <stdio.h>

int main()
 {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) 
    {
        printf("The number %f is positive\n", num);
    } 
        else if (num < 0)
        {
            printf("The number %f is negative\n", num);
        } 
            else
            {
                printf("The number is zero\n");
            }

    return 0;
}
