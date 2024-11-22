#include<stdio.h>

int main() 
{
    int i, j, mat[3][3], transpose_mat[3][3];

    // Input the elements of the matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    // Print the original matrix
    printf("The elements of the original matrix are:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Calculate the transpose
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            transpose_mat[j][i] = mat[i][j]; // Swap rows and columns
        }
    }

    // Print the transposed matrix
    printf("The elements of the transposed matrix are:\n");
    for(i = 0; i < 3; i++) 
    {

        for(j = 0; j < 3; j++) 
        {
            printf("%d ", transpose_mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
