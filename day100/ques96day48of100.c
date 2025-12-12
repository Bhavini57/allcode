//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int is_rotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Check if lengths are equal
    if(len1 != len2) {
        return 0; // Not a rotation
    }

    // Create a new string by concatenating str1 with itself
    char temp[200]; // Assuming the maximum length of str1 is less than 100
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if(strstr(temp, str2) != NULL) {
        return 1; // str2 is a rotation of str1
    } else {
        return 0; // Not a rotation
    }
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
    // Check if str2 is a rotation of str1
    if(is_rotation(str1, str2)) {
        printf("'%s' is a rotation of '%s'.\n", str2, str1);
    } else {
        printf("'%s' is not a rotation of '%s'.\n", str2, str1);
    }
    return 0;
}