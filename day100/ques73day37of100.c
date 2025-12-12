//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    int rowSums[rows];
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Calculate the sum of each row
    for(i = 0; i < rows; i++) {
        rowSums[i] = 0; // Initialize sum for the current row
        for(j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j]; // Add element to the current row sum
        }
    }
    // Print the sum of each row
    printf("Sum of each row:\n");
    for(i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, rowSums[i]);
    }
    return 0;
}