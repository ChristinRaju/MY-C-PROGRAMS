#include<stdio.h>
int main()
{
    int n1, n2, n3;
    float average;

    printf("enter values of n1, n2 and n3:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    average = (n1 + n2 + n3)/3;

    printf("Average of given 3 numbers is %f", average);

    return 0;
}