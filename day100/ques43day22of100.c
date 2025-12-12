//Write a program to check if a number is a strong number.
#include <stdio.h>
int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int number, original_number, digit, sum = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    original_number = number;

    // Calculate the sum of the factorials of each digit
    while(number != 0) {
        digit = number % 10; // Get the last digit
        sum += factorial(digit); // Add factorial of digit to sum
        number /= 10;       // Remove the last digit
    }

    // Check if the number is a strong number
    if(sum == original_number) {
        printf("%d is a strong number.\n", original_number);
    } else {
        printf("%d is not a strong number.\n", original_number);
    }

    return 0;
}