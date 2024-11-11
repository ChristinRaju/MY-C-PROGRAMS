//Write a C program to find the length of a string;

#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0, length;
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != 0)
    i++;

    length = i;

    printf("The length of the string is: %d", length);

    return 0;
}