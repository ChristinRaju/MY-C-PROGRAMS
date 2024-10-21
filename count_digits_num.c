//C Program to Count Number of Digits in an Integer

#include <stdio.h>
int main() 
{
  int n;
  int count = 0;
  printf("Enter an integer: ");
  scanf("%d", &n);
  
  do
  {
	n = n / 10; //to remove the last digit of num
        ++count; //to increment digit count
  }while (n != 0);
     
   	printf("Number of digits: %d\n", count);
  
  return 0;
}

