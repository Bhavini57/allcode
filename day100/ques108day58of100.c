/*Write a Program to take an integer array nums. Print an array answer such that answer[i] is
 equal to the product of all the elements of nums except nums[i]. The product of any prefix or 
 suffix of nums is guaranteed to fit in a 32-bit integer.*/
#include <stdio.h>
void product_except_self(int arr[], int size, int result[]) {
    int left_product[100];
    int right_product[100];
    // Initialize left_product and right_product arrays
    left_product[0] = 1;
    right_product[size - 1] = 1;
    // Calculate left products
    for(int i = 1; i < size; i++) {
        left_product[i] = left_product[i - 1] * arr[i - 1];
    }
    // Calculate right products
    for(int i = size - 2; i >= 0; i--) {
        right_product[i] = right_product[i + 1] * arr[i + 1];
    }
    // Calculate result by multiplying left and right products
    for(int i = 0; i < size; i++) {
        result[i] = left_product[i] * right_product[i];
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
    // Calculate product except self
    product_except_self(arr, size, result);
    // Print the result array
    printf("Product of array except self is: ");
    for(int i = 0; i < size; i++) {
        printf("%d", result[i]);
        if(i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}
