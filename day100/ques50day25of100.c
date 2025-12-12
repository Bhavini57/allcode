/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */
#include <stdio.h>
int main() {
    int i, j;
    int rows = 5; // Define number of rows
    // Loop through each row
    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(j = 1; j < i; j++) {
            printf(" "); // Print space
        }
        // Print asterisks
        for(j = i; j <= rows; j++) {
            printf("*"); // Print asterisk
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}