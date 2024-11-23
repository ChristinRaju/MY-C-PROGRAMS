//C Program to Increment a Number using functions;

#include <stdio.h>

// Function to increase the number by 1
int increaseByOne(int num) 
{
    return num + 1;  
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function to increase the number
    num = increaseByOne(num);

    printf("The number after increasing by 1 is: %d\n", num);

    return 0;
}

