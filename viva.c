#include <stdio.h>

int main () 
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int a = 2 * n - 1;
    int arr[a][a];  

    for (int i = 0; i < a; i++) 
    {
        for (int j = 0; j < a; j++) 
        {
            printf("%d", arr[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
//cant make it