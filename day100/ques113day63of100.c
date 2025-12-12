/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the 
kth smallest element in the array. Print the kth smallest element as output.
*/
#include <stdio.h>
void sort_array(int arr[], int size) {
    // Simple bubble sort to sort the array in ascending order
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int kth_smallest_element(int arr[], int size, int k) {
    sort_array(arr, size); // Sort the array first
    return arr[k - 1]; // Return the kth smallest element
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
    // Input the value of k
    printf("Enter the value of k: ");
    scanf("%d", &k);
    // Find the kth smallest element
    result = kth_smallest_element(arr, size, k);
    // Print the result
    printf("The %dth smallest element is: %d\n", k, result);
    return 0;
}
