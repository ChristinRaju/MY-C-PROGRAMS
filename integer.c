/*Write a C program to read the value of an integer m and 
  display the value of n is 1 when m is larger than 0,
  0 when m is 0 and -1 when m is less than 0*/

#include <stdio.h>
int main()
 {
    int m, n;

    printf("Enter an integer value for m: ");
    scanf("%d", &m);

    // Determine the value of n based on the value of m
    if (m > 0) 
    {
        n = 1;   // Set n to 1 if m is greater than 0
    } 
        else if (m == 0) 
        {
             n = 0;   // Set n to 0 if m is equal to 0
        } 
            else
            {
                n = -1;  // Set n to -1 if m is less than 0
            }

    printf("The value of n is: %d\n", n);

    return 0;
}
