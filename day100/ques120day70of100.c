/*Write a program to take a string input. Change it to sentence case.*/
#include <stdio.h>
#include <string.h>
void to_sentence_case(char str[]) {
    int length = strlen(str);
    int i;

    // Convert the first character to uppercase if it's a lowercase letter
    if(str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - ('a' - 'A');
    }

    // Convert the rest of the characters to lowercase if they are uppercase letters
    for(i = 1; i < length; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}
int main() {
    char str[200];
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    // Convert to sentence case
    to_sentence_case(str);
    // Print the result
    printf("String in sentence case: %s\n", str);
    return 0;
}