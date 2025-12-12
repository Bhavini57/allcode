//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main() {
    int number, sum = 0, i;
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);
    // Calculate the sum of proper divisors
    for(i = 1; i <= number / 2; i++) {
        if(number % i == 0) {
            sum += i; // Add divisor to sum
        }
    }
    // Check if the number is a perfect number
    if(sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }
    return 0;
}
