//Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int n, i, j, is_symmetric = 1;
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
    // Check if the matrix is symmetric
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0; // Not symmetric
                break;
            }
        }
        if(!is_symmetric) {
            break;
        }
    }
    // Print the result
    if(is_symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}
