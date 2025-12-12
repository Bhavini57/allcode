//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    char longest_word[100] = "";
    char current_word[100];
    int i = 0, j = 0, max_length = 0;

    // Input a sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the sentence to find words
    while(1) {
        // Extract a word
        j = 0;
        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            current_word[j++] = str[i++];
        }
        current_word[j] = '\0'; // Null-terminate the current word

        // Check if the current word is the longest
        if(j > max_length) {
            max_length = j;
            strcpy(longest_word, current_word);
        }

        // If end of string, break
        if(str[i] == '\0' || str[i] == '\n') {
            break;
        }
        i++; // Move to the next character after space
    }

    // Print the longest word
    printf("The longest word is: %s\n", longest_word);

    return 0;
}
