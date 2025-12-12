//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    int i = 0, start_of_surname = -1;
    // Input a name
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    int length = strlen(name);
    // Find the start index of the surname (last word)
    for(i = length - 1; i >= 0; i--) {
        if(name[i] == ' ' || name[i] == '\n') {
            start_of_surname = i + 1;
            break;
        }
    }
    // Print the initials of the first and middle names
    printf("Initials: ");
    // Print the first character as initial
    if(name[0] != ' ' && name[0] != '\n') {
        printf("%c. ", name[0]);
    }
    // Traverse the name to find spaces and print the next character as initial
    for(i = 0; i < start_of_surname - 1; i++) {
        if(name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            printf("%c. ", name[i + 1]);
        }
    }
    // Print the surname in full
    if(start_of_surname != -1) {
        printf("%s", &name[start_of_surname]);
    }
    printf("\n");
    return 0;
}
