//Print the initials of a name.
#include <stdio.h>
int main() {
    char name[100];
    int i = 0;
    // Input a name
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    // Print the initials
    printf("Initials: ");
    // Print the first character as initial
    if(name[0] != ' ' && name[0] != '\n') {
        printf("%c. ", name[0]);
    }
    // Traverse the name to find spaces and print the next character as initial
    while(name[i] != '\0' && name[i] != '\n') {
        if(name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            printf("%c. ", name[i + 1]);
        }
        i++;
    }
    printf("\n");
    return 0;
}
