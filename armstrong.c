#include<stdio.h>
int main()
{
    int n, r, armstrong, sum = 0;

    printf("enter n\n");
    scanf("%d", &n);
    
    armstrong = n; //stores the original value

    //calculate the sum of cubes of its digits
    while(n != 0)
    {
        r = n % 10; //get the last digit
        sum = sum + r * r * r; //add the cube of the digit to sum
        n = n / 10; //remove the last digit
    }


        //after the loop, check if the sum equals the original number    
        if(armstrong == sum)
        {  
          printf("%d is an Armstrong number\n", armstrong);
        }    
        else
        {
          printf("%d is not an Armstrong number\n", armstrong);
        }    
    
  
  return 0;
}