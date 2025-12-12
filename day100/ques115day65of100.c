/*Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. 
Print "Anagram" if they are, otherwise "Not Anagram".
*/
#include <stdio.h>
#include <string.h>
int are_anagrams(char str1[], char str2[]) {
    int count[26] = {0}; // Array to store frequency of each character

    // If lengths are different, they cannot be anagrams
    if(strlen(str1) != strlen(str2)) {
        return 0; // Not anagram
    }

    // Count frequency of each character in str1
    for(int i = 0; str1[i] != '\0'; i++) {
        count[str1[i] - 'a']++;
    }

    // Subtract frequency based on characters in str2
    for(int i = 0; str2[i] != '\0'; i++) {
        count[str2[i] - 'a']--;
    }

    // Check if all counts are zero
    for(int i = 0; i < 26; i++) {
        if(count[i] != 0) {
            return 0; // Not anagram
        }
    }
    return 1; // Anagram
}
int main() {
    char str1[100], str2[100];
    // Input two strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    // Check if they are anagrams
    if(are_anagrams(str1, str2)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    return 0;
}
