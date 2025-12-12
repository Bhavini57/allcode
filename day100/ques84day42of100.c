//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    // Input a lowercase string
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    // Convert to uppercase
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        }
        i++;
    }
    // Print the uppercase string
    printf("Uppercase string: %s\n", str);
    return 0;
}
