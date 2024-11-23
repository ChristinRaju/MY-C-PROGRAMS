//C program to read n numbers using array and calculate sum and average of array elements;

#include <stdio.h>

int main() 
{
    int i, n;

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int array1[n], array2[n], sumArray[n];
    float avgArray[n];  // Declare avgArray as float to hold decimal averages

    printf("Enter elements for the first array:\n");
    for (i = 0; i < n; i++) 
    {
        printf("array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("Enter elements for the second array:\n");
    for (i = 0; i < n; i++) 
    {
        printf("array2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    // Calculate sum and average
    for (i = 0; i < n; i++) 
    {
        sumArray[i] = array1[i] + array2[i];  
        avgArray[i] = (float)sumArray[i] / 2;  
    }

    printf("\nSums of corresponding elements:\n");
    for (i = 0; i < n; i++) 
    {
        printf("Sum = %d\n", sumArray[i]);
    }

    printf("\nAverages of corresponding elements:\n");
    for (i = 0; i < n; i++) 
    {
        printf("Average = %.2f\n", avgArray[i]);
    }

    return 0;
}
