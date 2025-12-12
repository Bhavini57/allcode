//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};
    int i;

    // Input two strings
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of each character in first string
    for(i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {
        char ch = str1[i];
        if(ch >= 'a' && ch <= 'z') {
            count1[ch - 'a']++;
        } else if(ch >= 'A' && ch <= 'Z') {
            count1[ch - 'A']++;
        }
    }

    // Count frequency of each character in second string
    for(i = 0; str2[i] != '\0' && str2[i] != '\n'; i++) {
        char ch = str2[i];
        if(ch >= 'a' && ch <= 'z') {
            count2[ch - 'a']++;
        } else if(ch >= 'A' && ch <= 'Z') {
            count2[ch - 'A']++;
        }
    }

    // Compare the frequency counts
    for(i = 0; i < 26; i++) {
        if(count1[i] != count2[i]) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");
    return 0;
}