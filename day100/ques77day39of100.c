//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int n, i, j, is_distinct = 1;
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
    // Check if the diagonal elements are distinct
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(matrix[i][i] == matrix[j][j]) {
                is_distinct = 0; // Not distinct
                break;
            }
        }
        if(!is_distinct) {
            break;
        }
    }
    // Print the result
    if(is_distinct) {
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }
    return 0;
}
