/*Write a program to take an input array of size n. The array should contain all the integers between 0 
to n except for one. Print that missing number
*/
#include <stdio.h>
int find_missing_number(int arr[], int size) {
    int total_sum = size * (size + 1) / 2; // Sum of first n natural numbers
    int arr_sum = 0;
    // Calculate the sum of elements in the array
    for(int i = 0; i < size; i++) {
        arr_sum += arr[i];
    }
    return total_sum - arr_sum; // The missing number
}
int main() {
    int arr[100], size, missing_number;
    // Input size of the array
    printf("Enter the size of the array (n-1): ");
    scanf("%d", &size);
    // Input elements of the array
    printf("Enter %d elements of the array (from 0 to %d with one missing):\n", size, size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Find the missing number
    missing_number = find_missing_number(arr, size);
    // Print the missing number
    printf("The missing number is: %d\n", missing_number);
    return 0;
}
