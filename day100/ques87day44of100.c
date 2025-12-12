//Count spaces, digits, and special characters in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, spaces = 0, digits = 0, special_chars = 0;
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Count spaces, digits, and special characters
    while(str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if(ch == ' ') {
            spaces++;
        } else if(ch >= '0' && ch <= '9') {
            digits++;
        } else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Do nothing for alphabets
        } else {
            special_chars++;
        }
        i++;
    }
    // Print the counts
    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special_chars);
    return 0;
}
