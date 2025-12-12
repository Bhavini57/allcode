//Find the sum of array elements.
#include <stdio.h>
int main() {
    int n, i, sum = 0;
    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Calculate the sum of array elements
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    // Print the sum of the array elements
    printf("Sum of array elements is: %d\n", sum);
    return 0;
}