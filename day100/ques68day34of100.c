//Delete an element from an array.
#include <stdio.h>
int main() {
    int n, i, position;
    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the position to delete the element
    printf("Enter the position to delete the element (0 to %d): ", n - 1);
    scanf("%d", &position);
    // Validate the position
    if(position < 0 || position >= n) {
        printf("Invalid position!\n");
        return 1;
    }
    // Shift elements to the left to overwrite the deleted element
    for(i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    // Print the updated array
    printf("Array after deletion:\n");
    for(i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
