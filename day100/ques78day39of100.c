//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() {
    int n, i, j, sum = 0;
    // Input the order of the square matrix
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Calculate the sum of main diagonal elements
    for(i = 0; i < n; i++) {
        sum += matrix[i][i]; // Add the diagonal element to sum
    }
    // Print the sum of main diagonal elements
    printf("The sum of main diagonal elements is: %d\n", sum);
    return 0;
}
