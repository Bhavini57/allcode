//Multiply two matrices.
#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2, i, j, k;
    // Input dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    // Input dimensions of the second matrix
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    // Check if multiplication is possible
    if(cols1 != rows2) {
        printf("Matrix multiplication not possible with the given dimensions.\n");
        return 1;
    }
    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int result[rows1][cols2];
    // Input elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    // Input elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < rows2; i++) {
        for(j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Initialize the result matrix to zero
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }
    // Perform matrix multiplication
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            for(k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // Print the result matrix
    printf("The result of matrix multiplication is:\n");
    for(i = 0; i < rows1; i++) {
        for(j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}