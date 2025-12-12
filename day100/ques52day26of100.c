/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */
#include <stdio.h>
int main() {
    int i, j;
    int rows = 5; // Define number of rows
    // Loop through each row
    for(i = 1; i <= rows; i++) {
        // Loop through each column in the current row
        for(j = 1; j <= rows; j++) {
            printf("*"); // Print asterisk
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}