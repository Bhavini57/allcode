//Toggle case of each character in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Toggle case of each character
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
        }
        i++;
    }
    // Print the modified string
    printf("Modified string: %s\n", str);
    return 0;
}
