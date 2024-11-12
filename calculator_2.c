#include<stdio.h>
int main()
{
    int num1, num2, choice;
    float result;

    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("choose an operation(+, -, *, /) by choosing numbers between 1 to 4: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: printf("sum of %d and %d is = %f", num1, num2, result = num1 + num2);
                break;

        case 2: printf("difference of %d and %d is = %f", num1, num2, result = num1 - num2);
                break;

        case 3: printf("product of %d and %d is = %f", num1, num2, result = num1 * num2);
                break;

        case 4: if(num2 == 0)
                {
                    printf("Error! Division by zero is not allowed");

                }    
                        else
                        {
                                printf("Quotient of %d and %d is = %f\n", num1, num2, result = (float)num1 / num2);

                        } 

         default:
                printf("Invalid choice! Please select a number between 1 and 4.\n");
                break;                                   
    }

    return 0;

}