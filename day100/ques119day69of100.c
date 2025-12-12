/*Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element.
 Try to find the result in one single iteration.*/
#include <stdio.h>
int find_repeated_element(int arr[], int size) {
    int seen[1000] = {0}; // Assuming the elements are in the range 0-999
    for(int i = 0; i < size; i++) {
        if(seen[arr[i]] == 1) {
            return arr[i]; // Found the repeated element
        }
        seen[arr[i]] = 1; // Mark the element as seen
    }
    return -1; // No repeated element found (should not happen as per problem statement)
}
int main() {
    int arr[100], size, repeated_element;
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Input elements of the array
    printf("Enter %d elements of the array (one element will be repeated):\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Find the repeated element
    repeated_element = find_repeated_element(arr, size);
    // Print the repeated element
    printf("The repeated element is: %d\n", repeated_element);
    return 0;
}
