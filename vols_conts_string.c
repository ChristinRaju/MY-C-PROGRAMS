//Write a C program to count the number of vowels and consonants in a given string;

#include <stdio.h>

int main() 
{
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != 0; i++) 
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || 
           str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || 
           str[i] == 'u' || str[i] == 'U') 
        {
            vowels++;
        }

        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
