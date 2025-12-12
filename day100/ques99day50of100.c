//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main() {
    char date[11]; // Format: dd/04/yyyy
    char new_date[12]; // Format: dd-Apr-yyyy
    // Input the date
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%s", date);
    // Check if the input format is correct
    if(strlen(date) != 10 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format.\n");
        return 1;
    }
    // Construct the new date format
    strncpy(new_date, date, 2); // Copy day
    new_date[2] = '-';
    strcpy(&new_date[3], "Apr"); // Add month abbreviation
    new_date[6] = '-';
    strcpy(&new_date[7], &date[6]); // Copy year
    new_date[11] = '\0'; // Null-terminate the string
    // Display the new date format
    printf("Date in dd-Apr-yyyy format: %s\n", new_date);
    return 0;
}
