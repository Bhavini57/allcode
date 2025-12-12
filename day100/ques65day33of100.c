//Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int n, i, target, left, right, mid, found = 0;
    // Input the number of elements
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    int arr[n];
    // Input elements of the sorted array
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the target element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);
    // Initialize left and right pointers
    left = 0;
    right = n - 1;
    // Perform binary search
    while(left <= right) {
        mid = left + (right - left) / 2; // Calculate mid index
        if(arr[mid] == target) {
            found = 1; // Element found
            break;
        } else if(arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
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
