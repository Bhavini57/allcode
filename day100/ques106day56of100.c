/*Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not useuse brute force approach (nested loop) to solve.*/
#include <stdio.h>
void find_next_greater_elements(int arr[], int size, int result[]) {
    int stack[100]; // Stack to keep track of elements
    int top = -1;   // Initialize stack top

    // Traverse the array from right to left
    for(int i = size - 1; i >= 0; i--) {
        // Pop elements from stack while stack is not empty and top of stack is less than or equal to arr[i]
        while(top != -1 && stack[top] <= arr[i]) {
            top--;
        }
        // If stack is empty, no greater element exists
        if(top == -1) {
            result[i] = -1;
        } else {
            result[i] = stack[top]; // Next greater element is at the top of the stack
        }
        // Push current element onto the stack
        stack[++top] = arr[i];
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
    // Find next greater elements
    find_next_greater_elements(arr, size, result);
    // Print the result in comma separated fashion
    printf("Next greater elements are: ");
    for(int i = 0; i < size; i++) {
        printf("%d", result[i]);
        if(i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}

