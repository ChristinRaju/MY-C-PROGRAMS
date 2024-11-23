//Write a C program to find the maximun and minimum elements in an integer array;

#include <stdio.h>

int main() 
{
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter %d integers: \n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(i = 1; i < n; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i]; // Update max
        }
        if(arr[i] < min) 
        {
            min = arr[i]; // Update min
        }
    }
    
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);
    
    return 0;
}
