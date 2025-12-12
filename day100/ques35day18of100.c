//Q35: Write a program to print all factors of a given number.

#include <stdio.h>
int main() {
    int number, i;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);
    // Loop to find and print factors
    for(i = 1; i <= number; i++) {
        if(number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}