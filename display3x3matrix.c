#include<stdio.h>
int main()
{
    int i, j, mat[3][3];

    printf("enter the elements of the matrix\n");
    

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }    

    printf("the elements of the matrix are\n");
    

    for(i = 0; i < 3; i++)
    { 
        for(j = 0; j < 3; j++)
        {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}    