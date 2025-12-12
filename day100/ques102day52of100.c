//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>
int find_ceil_index(int arr[], int size, int x) {
    for(int i = 0; i < size; i++) {
        if(arr[i] >= x) {
            return i; // Return the index of the first occurrence of ceil
        }
    }
    return -1; // If no element is greater than or equal to x
}
int main() {
    int arr[100], size, x, ceil_index;
    // Input size of the array
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);
    // Input elements of the sorted array
    printf("Enter %d elements of the sorted array:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the value of x
    printf("Enter the value of x: ");
    scanf("%d", &x);
    ceil_index = find_ceil_index(arr, size, x);
    // Print the index of the ceil element
    printf("Index of the ceil of %d is: %d\n", x, ceil_index);
    return 0;
}