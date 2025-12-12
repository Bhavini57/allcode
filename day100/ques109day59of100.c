/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
*/
#include <stdio.h>
int max_sum_subarray(int arr[], int size, int k) {
    int max_sum = 0, current_sum = 0;
    // Calculate the sum of the first k elements
    for(int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    max_sum = current_sum;
    // Use sliding window technique to find maximum sum of subarrays of size k
    for(int i = k; i < size; i++) {
        current_sum += arr[i] - arr[i - k]; // Slide the window
        if(current_sum > max_sum) {
            max_sum = current_sum; // Update max_sum if current_sum is greater
        }
    }
    return max_sum;
}
int main() {
    int arr[100], size, k, result;
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Input elements of the array
    printf("Enter %d elements of the array:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the size of subarray k
    printf("Enter the size of subarray k: ");
    scanf("%d", &k);
    // Calculate maximum sum of subarrays of size k
    result = max_sum_subarray(arr, size, k);
    // Print the result
    printf("Maximum sum of subarrays of size %d is: %d\n", k, result);
    return 0;
}
