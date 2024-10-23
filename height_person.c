/* Write a C program to accept the height of a person in centimeters and categorize 
  the person based on height as taller, dwarf and average height person.*/
 

#include<stdio.h>
int main()
{
    float height;

    printf("Enter the height(in centimeters)\n");
    scanf("%f", &height);

    if(height < 150.0)
        printf("Dwarf\n");

        else if(height >= 150.0 && height <= 165.0)
            printf("Average height\n");

            else if(height > 165.0 && height <= 195.0)
                printf("Taller\n");

                else
                    printf("Abnormal Height\n");

        return 0;
    }