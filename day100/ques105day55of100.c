/*Write a program to take an integer array nums of size n, and print the majority element. 
The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if 
no such element exists. Note: Majority Element is not necessarily the element that is present
 most number of times.*/
#include <stdio.h>
int find_majority_element(int arr[], int size) {
    int count_threshold = size / 2;
    for(int i = 0; i < size; i++) {
        int count = 0;
        for(int j = 0; j < size; j++) {
            if(arr[j] == arr[i]) {
                count++;
            }
        }
        if(count > count_threshold) {
            return arr[i]; // Found the majority element
        }
    }
    return -1; // No majority element found
}
int main() {
    int arr[100], size, majority_element;
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Input elements of the array
    printf("Enter %d elements of the array:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    majority_element = find_majority_element(arr, size);
    // Print the majority element
    printf("Majority element is: %d\n", majority_element);
    return 0;
}

