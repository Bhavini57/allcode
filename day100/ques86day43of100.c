//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int length, i, is_palindrome = 1;

    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate the length of the string
    length = 0;
    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Check if the string is a palindrome
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            is_palindrome = 0; // Not a palindrome
            break;
        }
    }

    // Print the result
    if(is_palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}