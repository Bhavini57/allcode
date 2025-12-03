#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , i;
    printf ("enter no of element you want:\n");
    scanf("%d",&n);

    int *arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("memory does not allocated");
        return 0;
    }
    printf("enter %d element\n",n);
    for (i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("sum of all arr = %d\n",sum);
    free(arr);

    return 0;
}