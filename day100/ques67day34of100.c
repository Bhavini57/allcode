//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int n, i, element, position;
    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n + 1]; // Create an array with one extra space for the new element
    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the element to be inserted
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    // Input the position to insert the element
    printf("Enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &position);
    // Validate the position
    if(position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }
    // Shift elements to the right to make space for the new element
    for(i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element at the specified position
    arr[position] = element;
    // Print the updated array
    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
