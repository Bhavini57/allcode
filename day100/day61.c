#include <stdio.h>
int main ()
{
    int n, odd, even;
    printf("enter a integer:");
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("n=%d in even number", n);
    }
    else
    {
        printf("n=%d is odd number", n);
    }

    return 0;
}