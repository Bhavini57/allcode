//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i, index[26] = {0}; // Array to store frequency of each alphabet
    char first_repeating = '\0';
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Traverse the string
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z') { // Check for lowercase alphabet
            index[ch - 'a']++; // Increment frequency
            if(index[ch - 'a'] == 2 && first_repeating == '\0') {
                first_repeating = ch; // Found the first repeating character
            }
        }
    }
    // Print the result
    if(first_repeating != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", first_repeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}

