/*Write a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all 
the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there 
are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
*/
#include <stdio.h>
int find_pivot_index(int arr[], int size) {
    int total_sum = 0;
    int left_sum = 0;
    // Calculate total sum of the array
    for(int i = 0; i < size; i++) {
        total_sum += arr[i];
    }
    // Traverse the array to find the pivot index
    for(int i = 0; i < size; i++) {
        total_sum -= arr[i]; // Now total_sum is the right sum for index i
        if(left_sum == total_sum) {
            return i; // Found the pivot index
        }
        left_sum += arr[i]; // Update left sum for next index
    }
    return -1; // No pivot index found
}
int main() {
    int arr[100], size, pivot_index;
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Input elements of the array
    printf("Enter %d elements of the array:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    pivot_index = find_pivot_index(arr, size);
    // Print the pivot index
    printf("Pivot index is: %d\n", pivot_index);
    return 0;
}
