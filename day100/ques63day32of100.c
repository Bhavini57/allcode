//Merge two arrays.
#include <stdio.h>
int main() {
    int n1, n2, i, j;
    // Input the number of elements for the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    // Input elements of the first array
    printf("Enter %d elements for the first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    // Input the number of elements for the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    // Input elements of the second array
    printf("Enter %d elements for the second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    // Merge the two arrays into a third array
    int merged[n1 + n2];
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i]; // Copy elements from first array
    }
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j]; // Copy elements from second array
    }
    // Print the merged array
    printf("Merged array is:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}