//Replace spaces with hyphens in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Replace spaces with hyphens
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ' ') {
            str[i] = '-'; // Replace space with hyphen
        }
        i++;
    }
    // Print the modified string
    printf("Modified string: %s\n", str);
    return 0;
}
