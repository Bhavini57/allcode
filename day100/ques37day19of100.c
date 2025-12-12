//Write a program to find the LCM of two numbers
#include <stdio.h>
int main() {
    int num1, num2, lcm, max;
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // Find LCM using brute-force method
    max = (num1 > num2) ? num1 : num2; // Start from the larger number
    while(1) {
        if(max % num1 == 0 && max % num2 == 0) {
            lcm = max; // Found the LCM
            break;
        }
        max++; // Increment to check the next number
    }
    // Display the LCM
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}
