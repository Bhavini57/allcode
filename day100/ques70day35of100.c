//Rotate an array to the right by k positions.
#include <stdio.h>
void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle cases where k >= n
    int temp[k];
    // Store the last k elements in a temporary array
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    // Shift the remaining elements to the right
    for(int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    // Copy the elements from the temporary array to the front
    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int n, k;
    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the number of positions to rotate
    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);
    // Rotate the array to the right by k positions
    rotateRight(arr, n, k);
    // Print the rotated array
    printf("Array after rotating right by %d positions:\n", k);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
