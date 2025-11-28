#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    int *even = (int *)malloc(evenCount * sizeof(int));
    int *odd = (int *)malloc(oddCount * sizeof(int));

    int e = 0, o = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    printf("Even elements: ");
    for (int i = 0; i < evenCount; i++)
        printf("%d ", even[i]);

    printf("\nOdd elements: ");
    for (int i = 0; i < oddCount; i++)
        printf("%d ", odd[i]);

    free(arr);
    free(even);
    free(odd);

    return 0;
}
