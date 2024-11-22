#include <stdio.h>

// Function to input matrix elements
void inputMatrix(int matrix[5][5], int rows, int columns) {
    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[5][5], int mat2[5][5], int product[5][5], int rows1, int columns1, int rows2, int columns2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            product[i][j] = 0;  // Initialize product matrix element to 0
            for (int k = 0; k < columns1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[5][5], int rows, int columns) {
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[5][5], mat2[5][5], product[5][5] = {0};
    int rows1, columns1, rows2, columns2;

    printf("Enter the number of rows and columns for the first matrix (m x n): ");
    scanf("%d%d", &rows1, &columns1);

    printf("Enter the number of rows and columns for the second matrix (m x n): ");
    scanf("%d%d", &rows2, &columns2);

    if (columns1 != rows2) {
        printf("Matrix multiplication is not possible. The number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
        return 1; 
    }

    // Input elements for the first matrix
    inputMatrix(mat1, rows1, columns1);

    // Input elements for the second matrix
    inputMatrix(mat2, rows2, columns2);

    // Matrix multiplication
    multiplyMatrices(mat1, mat2, product, rows1, columns1, rows2, columns2);

    // Print the product of the matrices
    printMatrix(product, rows1, columns2);

    return 0;
}
