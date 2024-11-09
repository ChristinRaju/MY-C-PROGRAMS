//Write a C program to perform matrix multiplication

#include <stdio.h>

int main() 
{
    int i, j, k;
    int rows1, columns1, rows2, columns2;
    int mat1[5][5], mat2[5][5], product[5][5] = {0};

    // Input dimensions for the first matrix
    printf("Enter the number of rows and columns for the first matrix (m x n): ");
    scanf("%d%d", &rows1, &columns1);

    // Input dimensions for the second matrix
    printf("Enter the number of rows and columns for the second matrix (m x n): ");
    scanf("%d%d", &rows2, &columns2);

    // Check if matrix multiplication is possible
    if (columns1 != rows2)
    {
        printf("Matrix multiplication is not possible. The number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
    }


    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < rows1; i++) 
    {
        for (j = 0; j < columns1; j++) 
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < rows2; i++) 
    {
        for (j = 0; j < columns2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < columns2; j++) 
        {
            for (k = 0; k < columns1; k++) 
            {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("The product of the two matrices is:\n");
    for (i = 0; i < rows1; i++) 
    {
        for (j = 0; j < columns2; j++) 
        {
            printf("%d ", product[i][j]);
        }

            printf("\n");
    }

    return 0;
}
