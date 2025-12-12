/*Write a program to take a string s as input. The task is to find the length of the longest substring
without repeating characters. Print the length as output.*/
#include <stdio.h>
#include <string.h>
int length_of_longest_substring(char str[]) {
    int max_length = 0;
    int start = 0;
    int index[256]; // ASCII character set

    // Initialize index array
    for(int i = 0; i < 256; i++) {
        index[i] = -1;
    }

    for(int i = 0; str[i] != '\0'; i++) {
        char current_char = str[i];
        // If the character is found in the current substring
        if(index[(unsigned char)current_char] >= start) {
            start = index[(unsigned char)current_char] + 1; // Move start to the next position
        }
        index[(unsigned char)current_char] = i; // Update the last seen index of the character
        int current_length = i - start + 1; // Calculate current substring length
        if(current_length > max_length) {
            max_length = current_length; // Update max length if current is greater
        }
    }
    return max_length;
}
int main() {
    char str[100];
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    // Find length of longest substring without repeating characters
    int result = length_of_longest_substring(str);
    // Print the result
    printf("Length of the longest substring without repeating characters is: %d\n", result);
    return 0;
}
