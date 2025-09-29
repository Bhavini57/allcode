#include <stdio.h>
int main ()
{
    int i,n, prod=1 ;
    printf("enter n:");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        int even = 2*i;
        prod = prod*i;

    }
        printf("prod of first %d eve numbers = %d\n", n, prod);

    return 0;
}