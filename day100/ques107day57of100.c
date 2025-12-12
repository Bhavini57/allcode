/*Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/
#include <stdio.h>
void find_previous_greater_elements(int arr[], int size, int result[]) {
    // Traverse each element in the array
    for(int i = 0; i < size; i++) {
        result[i] = -1; // Default value if no previous greater element is found
        // Check elements to the left of arr[i]
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                result[i] = arr[j]; // Found the previous greater element
                break; // Exit the inner loop
            }
        }
    }
}
int main() {
    int arr[100], size, result[100];
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Input elements of the array
    printf("Enter %d elements of the array:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Find previous greater elements
    find_previous_greater_elements(arr, size, result);
    // Print the result in comma separated fashion
    printf("Previous greater elements are: ");
    for(int i = 0; i < size; i++) {
        printf("%d", result[i]);
        if(i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
