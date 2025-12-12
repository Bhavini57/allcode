//Reverse a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], reversed[100];
    int length, i, j = 0;

    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    length = 0;
    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    for(i = length - 1; i >= 0; i--) {
        reversed[j++] = str[i];
    }
    reversed[j] = '\0'; // Null-terminate the reversed string

    // Print the reversed string
    printf("Reversed string: %s\n", reversed);

    return 0;
}
