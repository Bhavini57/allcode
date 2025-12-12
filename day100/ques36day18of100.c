//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main() {
    int num1, num2, hcf, i;
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // Find HCF using brute-force method
    hcf = 1; // Initialize HCF to 1
    for(i = 1; i <= (num1 < num2 ? num1 : num2); i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            hcf = i; // Update HCF if i divides both numbers
        }
    }
    // Display the HCF
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}