//Find the second largest element in an array
#include <stdio.h>
int main() {
    int n, i;
    int largest, second_largest;
    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Initialize largest and second largest
    largest = second_largest = -2147483648; // Minimum integer value
    // Find the largest and second largest elements
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest; // Update second largest
            largest = arr[i];         // Update largest
        } else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i]; // Update second largest
        }
    }
    // Check if second largest was found
    if(second_largest == -2147483648) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }
    return 0;
}
