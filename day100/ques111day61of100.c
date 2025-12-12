/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the 
first negative integer in each subarray of size k moving from left to right. If no negative exists in a window,
 print "0" for that window. Print the results separated by spaces as output.
*/
#include <stdio.h>
void first_negative_in_subarrays(int arr[], int size, int k, int result[]) {
    // Traverse the array to find first negative in each subarray of size k
    for(int i = 0; i <= size - k; i++) {
        result[i] = 0; // Default value if no negative number is found
        // Check each element in the current subarray
        for(int j = 0; j < k; j++) {
            if(arr[i + j] < 0) {
                result[i] = arr[i + j]; // Found the first negative number
                break; // Exit the inner loop
            }
        }
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
    // Find first negative in each subarray of size k
    first_negative_in_subarrays(arr, size, k, result);
    // Print the result
    printf("First negative integers in each subarray of size %d are: ", k);
    for(int i = 0; i <= size - k; i++) {
        printf("%d", result[i]);
        if(i != size - k) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
