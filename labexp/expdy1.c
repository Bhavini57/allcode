#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, element;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc((n + 1) * sizeof(int)); // +1 for new element

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    // Shift elements to the right
    for (int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = element; // Insert new element

    n++; // New size

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
