/*Write a program to print the following pattern:
*****
*****
*****
*****
***** */
#include <stdio.h>
int main() {
    int i, j;
    int rows = 5, cols = 5; // Define number of rows and columns

    // Loop through each row
    for(i = 0; i < rows; i++) {
        // Loop through each column in the current row
        for(j = 0; j < cols; j++) {
            printf("*"); // Print asterisk
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}