//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int number, digit, i;
    int count[10] = {0}; // Array to store count of digits 0-9
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);
    // Count occurrences of each digit
    while(number != 0) {
        digit = number % 10; // Get the last digit
        count[digit]++;      // Increment the count for this digit
        number /= 10;       // Remove the last digit
    }
    // Find the digit with the maximum count
    int max_count = 0;
    int most_frequent_digit = 0;
    for(i = 0; i < 10; i++) {
        if(count[i] > max_count) {
            max_count = count[i];
            most_frequent_digit = i;
        }
    }
    // Display the most frequent digit and its count
    printf("Digit %d occurs the most with a count of %d times.\n", most_frequent_digit, max_count);
    return 0;
}
