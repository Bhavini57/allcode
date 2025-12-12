//Print each character of a string on a new line.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    // Input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Print each character on a new line
    printf("Characters in the string:\n");
    while(str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}
