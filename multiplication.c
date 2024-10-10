#include<stdio.h>
int main()
{
    int n,i;

    printf("enter any number\n");
    scanf("%d\n", &n);

    printf("Multiplication table of %d\n", n);
    
    for(i = 0; i <= 10; i++)

    printf("%d x %d = %d\n", n, i, (n * i));

    return 0;

}