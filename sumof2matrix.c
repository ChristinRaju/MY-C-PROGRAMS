//Write a C program to add two matrices and display the result.

#include<stdio.h>
int main()
{
    int i, j;
    int rows1, columns1, rows2, columns2, rows_sum, columns_sum;
    int mat1[5][5], mat2[5][5], sum[5][5];
    

    printf("enter the number of rows in first matrix: ");
    scanf("%d", &rows1);

    printf("enter the number of columns in first matrix: ");
    scanf("%d", &columns1);


    printf("enter the number of rows in second matrix: ");
    scanf("%d", &rows2);

    printf("enter the number of columns in second matrix: ");
    scanf("%d", &columns2);


    if(rows1 != rows2 || columns1 != columns2)
    {
        printf("Matrices cannot be added\n");
    }    


    printf("enter the number of elements in first matrix: ");

     for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < columns1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }    
    }

    printf("enter the number of elements in second matrix: ");

    for(i = 0; i < rows2; i++)
    {
        for(j = 0; j < columns2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
            for(i = 0; i < rows1; i++)
            {
                for(j = 0; j < columns1; j++)
                    sum[i][j] = mat1[i][j] + mat2[i][j];
            }

    printf("the sum of the two matrix are: \n");

    for(i = 0; i < rows1; i++)
    {  
        for(j = 0; j < columns1; j++)
        {
            printf("%d  ", sum[i][j]);
        }   

        printf(" \n"); 
        
            
    }        

    return 0;

}
