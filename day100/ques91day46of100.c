//Remove all vowels from a string.
#include <stdio.h>
int main() {
    char str[100], result[100];
    int i = 0, j = 0;
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove vowels
    while(str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
           ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j++] = ch; // Copy non-vowel character to result
        }
        i++;
    }
    result[j] = '\0'; // Null-terminate the result string
    // Print the modified string
    printf("String after removing vowels: %s\n", result);
    return 0;
}
