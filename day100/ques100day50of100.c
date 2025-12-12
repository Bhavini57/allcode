//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, len;

    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    len = strlen(str);
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0'; // Remove newline character if present
        len--;
    }

    printf("Sub-strings of the string are:\n");
    // Generate all sub-strings
    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            // Print sub-string from index i to j
            for(int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n'); // New line after each sub-string
        }
    }

    return 0;
}
