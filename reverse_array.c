//Program to print the reverse of an Array in C

#include<stdio.h>
int main()
{
    int size;
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reversed array: ");
    for(int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}