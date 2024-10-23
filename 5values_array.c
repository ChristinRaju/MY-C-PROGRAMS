//Write a C program to take 5 values from the user and take them in an array.

#include <stdio.h>
int main()
 {
    int numbers[5];  // Array to store 5 integer values

    printf("Enter 5 integer values:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);  // Store each value in the array
    }

    // Display the values stored in the array
    printf("The values you entered are:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
