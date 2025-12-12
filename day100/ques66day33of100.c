//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main() {
    int n, i, j, element, position;
    // Input the number of elements
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[n + 1]; // Create an array with one extra space for the new element
    // Input elements of the sorted array
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the element to be inserted
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    // Find the appropriate position to insert the element
    position = n; // Default position is at the end
    for(i = 0; i < n; i++) {
        if(arr[i] > element) {
            position = i; // Update position if current element is greater
            break;
        }
    }
    // Shift elements to the right to make space for the new element
    for(j = n; j > position; j--) {
        arr[j] = arr[j - 1];
    }
    // Insert the new element at the found position
    arr[position] = element;
    // Print the updated array
    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
