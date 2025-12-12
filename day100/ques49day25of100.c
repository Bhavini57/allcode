/*Write a program to print the following pattern:
5
45
345
2345
12345 */
#include <stdio.h>
int main() {
    int i, j;
    int rows = 5; // Define number of rows
    // Loop through each row
    for(i = rows; i >= 1; i--) {
        // Loop through each column in the current row
        for(j = i; j <= rows; j++) {
            printf("%d", j); // Print the current column number
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}