#include <stdio.h>

void fibonacci(int n); 

int main() 
{
    int n;    
    printf("Enter n value to print Fibonacci terms up to n:\n");
    scanf("%d", &n);
    
    fibonacci(n);
   
    return 0; 
}

void fibonacci(int n) 
{ 
    int n1 = 0, n2 = 1, n3=1, i;
    
    printf("%d %d ", n1, n2);
 
    for (i = 3; i <= n; i++)
    {
       printf("%d ",n3);
       n1 = n2;
       n2 = n3;
       n3 = n1 + n2;
        
    }
    
    printf("\n"); 
    
   
}    
