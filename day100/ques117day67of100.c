/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that 
the merged array is also sorted. Print the merged array.
*/
#include <stdio.h>
void merge_sorted_arrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;
    // Merge the two arrays
    while(i < size1 && j < size2) {
        if(arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    // Copy remaining elements of arr1, if any
    while(i < size1) {
        merged[k++] = arr1[i++];
    }
    // Copy remaining elements of arr2, if any
    while(j < size2) {
        merged[k++] = arr2[j++];
    }
}
int main() {
    int arr1[100], arr2[100], merged[200];
    int size1, size2, merged_size;
    // Input size of the first array
    printf("Enter the size of the first sorted array: ");
    scanf("%d", &size1);
    // Input elements of the first array
    printf("Enter %d elements of the first sorted array:\n", size1);
    for(int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    // Input size of the second array
    printf("Enter the size of the second sorted array: ");
    scanf("%d", &size2);
    // Input elements of the second array
    printf("Enter %d elements of the second sorted array:\n", size2);
    for(int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    // Merge the two sorted arrays
    merge_sorted_arrays(arr1, size1, arr2, size2, merged);
    merged_size = size1 + size2;
    // Print the merged sorted array
    printf("Merged sorted array is: ");
    for(int i = 0; i < merged_size; i++) {
        printf("%d", merged[i]);
        if(i != merged_size - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
