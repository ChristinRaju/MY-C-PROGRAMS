#include<stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, n, i;

    printf("enter n value to print fibonacci terms upto n\n");
    scanf("%d", &n);

    n3 = n1 + n2;

    printf("The fibonacci series upto %d terms are \n", n);

    printf("%d %d ", n1, n2);

    for(i = 3; i <= n; i++)
    {
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }

    return 0;
}