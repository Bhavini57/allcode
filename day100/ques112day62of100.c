/*Write a program to take an integer array arr as input. The task is to find the maximum sum of any 
contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, 
print the largest (least negative) element.
*/
#include <stdio.h>
int max_subarray_sum(int arr[], int size) {
    int max_so_far = arr[0];
    int max_ending_here = arr[0];
    for(int i = 1; i < size; i++) {
        max_ending_here = (arr[i] > (max_ending_here + arr[i])) ? arr[i] : (max_ending_here + arr[i]);
        max_so_far = (max_so_far > max_ending_here) ? max_so_far : max_ending_here;
    }
    return max_so_far;
}
int main() {
    int arr[100], size, result;
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Input elements of the array
    printf("Enter %d elements of the array:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Calculate maximum subarray sum
    result = max_subarray_sum(arr, size);
    // Print the result
    printf("Maximum sum of contiguous subarray is: %d\n", result);
    return 0;
}
