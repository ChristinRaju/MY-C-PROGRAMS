//Write a C program to read a string and find the frequency of a character;

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], ch;
    int count = 0;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character: ");
    scanf(" %c", &ch); //space before %c to ignore newline

    //count the frequency of the character
    for(i = 0; str[i] != 0; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    printf("The character %c appaers %d times", ch, count);

    return 0;
}

