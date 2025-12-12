//Find the maximum and minimum element in an array.
#include <stdio.h>
int main() {
    int n, i;
    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];
    // Find the maximum and minimum elements
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
        if(arr[i] < min) {
            min = arr[i]; // Update min if current element is smaller
        }
    }
    // Print the maximum and minimum elements
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);
    return 0;
}
