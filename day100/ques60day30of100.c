//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n, i;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Count positive, negative, and zero elements
    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            positive_count++; // Increment positive count
        } else if(arr[i] < 0) {
            negative_count++; // Increment negative count
        } else {
            zero_count++;     // Increment zero count
        }
    }
    // Print the counts
    printf("Number of positive elements: %d\n", positive_count);
    printf("Number of negative elements: %d\n", negative_count);
    printf("Number of zero elements: %d\n", zero_count);
    return 0;
}