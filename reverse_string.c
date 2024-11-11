#include <stdio.h>
#include<string.h>

int main() 
{
    char str[100];
    int i = 0, j, temp, length;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != 0)
    i++;

    length = i;

    j = i - 1;
    i = 0;
    
       
        while (i < j) 
        {
            temp = str[i];  
            str[i] = str[j]; 
            str[j] = temp;
    
            i++;  // Move i right (towards the end of the string)
            j--;  // Move j left (towards the beginning of the string)
        }
   

    printf("Reversed string: %s\n", str);

    return 0;
}
