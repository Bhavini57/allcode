/*Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. 
The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly
 one solution exists and return the indices in any order. Print the two indices separated by a space as output. 
If no solution exists, print "-1 -1".*/
#include <stdio.h>
void find_two_sum(int arr[], int size, int target, int result[]) {
    // Initialize result to -1, -1 indicating no solution found
    result[0] = -1;;
    result[1] = -1;
    // Check each pair of elements in the array
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] + arr[j] == target) {
                result[0] = i; // Store first index
                result[1] = j; // Store second index
                return; // Exit the function as we found the solution
            }
        }
    }
}
int main() {
    int arr[100], size, target, result[2];
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Input elements of the array
    printf("Enter %d elements of the array:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Input the target sum
    printf("Enter the target sum: ");
    scanf("%d", &target);
    // Find two indices such that their values sum to target
    find_two_sum(arr, size, target, result);
    // Print the result
    printf("Indices of the two numbers that add up to %d are: %d %d\n", target, result[0], result[1]);
    return 0;
}
