/*Write a program to take an integer array arr and an integer k as inputs. The task is to 
find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for
 each window separated by spaces as output*/
#include <stdio.h>
void max_in_subarrays(int arr[], int size, int k, int result[]) {
    // Traverse the array to find maximum in each subarray of size k
    for(int i = 0; i <= size - k; i++) {
        int max = arr[i]; // Initialize max for the current subarray
        // Find the maximum in the current subarray
        for(int j = 1; j < k; j++) {
            if(arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        result[i] = max; // Store the maximum in the result array
    }
}
int main() {
    int arr[100], size, k, result[100];
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
    // Find maximum in each subarray of size k
    max_in_subarrays(arr, size, k, result);
    // Print the result
    printf("Maximum elements in each subarray of size %d are: ", k);
    for(int i = 0; i <= size - k; i++) {
        printf("%d", result[i]);
        if(i != size - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
