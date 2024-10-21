//Write a C program to print ASCII value of a character.

#include<stdio.h>
int main()
{
    char ch;

    printf("enter any charcater:\n");
    scanf("%c", &ch);
    
    printf("the ASCII values of %c is %d:\n", ch, ch);

    return 0;
    }
