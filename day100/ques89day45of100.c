//Count frequency of a given character in a string.
#include <stdio.h>
int main() {
    char str[100], ch;
    int i = 0, frequency = 0;
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Input the character to count
    printf("Enter a character to count its frequency: ");
    scanf("%c", &ch);
    // Count the frequency of the character
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ch) {
            frequency++;
        }
        i++;
    }
    // Print the frequency
    printf("The frequency of '%c' in the string is: %d\n", ch, frequency);
    return 0;
}
