/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */
#include <stdio.h>
int main() {
    int i, j, k;
    int rows = 5; // Define number of rows
    // Loop through each row
    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(k = 1; k <= rows - i; k++) {
            printf(" "); // Print space
        }
        // Print numbers in the current row
        for(j = rows - i + 1; j <= rows; j++) {
            printf("%d", j); // Print the current number
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}