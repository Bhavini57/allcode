//Find the transpose of a matrix.
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    int transpose[cols][rows];
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Calculate the transpose of the matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j]; // Swap rows and columns
        }
    }
    // Print the transpose of the matrix
    printf("The transpose of the matrix is:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
