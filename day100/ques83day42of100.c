//Count vowels and consonants in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Count vowels and consonants
    while(str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        // Check for vowels (both uppercase and lowercase)
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) { // Check if character is an alphabet
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
               ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }
    // Print the counts
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}
