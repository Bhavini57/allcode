//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int number, product = 1, digit;
    int has_odd = 0; // Flag to check if there is at least one odd digit
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);
    // Calculate the product of odd digits
    while(number != 0) {
        digit = number % 10; // Get the last digit
        if(digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply it to product
            has_odd = 1; // Set flag to true
        }
        number /= 10;       // Remove the last digit
    }
    // Display the product of odd digits
    if(has_odd) {
        printf("Product of odd digits is: %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }
    return 0;
}