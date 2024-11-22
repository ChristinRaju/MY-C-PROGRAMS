#include<stdio.h>

// Function to input the matrix
void inputMatrix(int mat[3][3]) 
{
    int i, j;
    printf("Enter the elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to print the matrix
void printMatrix(int mat[3][3]) 
{
    int i, j;
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate the transpose of the matrix
void transposeMatrix(int mat[3][3], int transpose_mat[3][3]) 
{
    int i, j;
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            transpose_mat[j][i] = mat[i][j]; // Swap rows and columns
        }
    }
}

int main() 
{
    int mat[3][3], transpose_mat[3][3];

    // Input the matrix
    inputMatrix(mat);

    // Print the original matrix
    printf("The elements of the original matrix are:\n");
    printMatrix(mat);

    // Calculate the transpose
    transposeMatrix(mat, transpose_mat);

    // Print the transposed matrix
    printf("The elements of the transposed matrix are:\n");
    printMatrix(transpose_mat);

    return 0;
}
