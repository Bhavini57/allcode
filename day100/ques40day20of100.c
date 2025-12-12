//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>
int main() {
    char binary[65]; // Array to hold binary number as string (64 bits + null terminator)
    char ones_complement[65]; // Array to hold 1's complement

    // Input a binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);

    // Calculate 1's complement
    for(int i = 0; i < length; i++) {
        if(binary[i] == '0') {
            ones_complement[i] = '1';
        } else if(binary[i] == '1') {
            ones_complement[i] = '0';
        } else {
            printf("Invalid binary number.\n");
            return 1; // Exit with error code
        }
    }
    ones_complement[length] = '\0'; // Null-terminate the string

    // Display the 1's complement
    printf("1's Complement: %s\n", ones_complement);

    return 0;
}