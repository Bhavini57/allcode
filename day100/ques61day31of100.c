//Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int n, i, target, found = 0;
    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the target element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);
    // Perform linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = 1; // Element found
            break;
        }
    }
    // Print the result
    if(found) {
        printf("Element %d found in the array.\n", target);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
}