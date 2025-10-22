#include <stdio.h>
int main ()
{
    int n, rev=1 ,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp = n;

    while (n == rev)
    {
        rev = n * 10 + (n % 10);
       
    }
    if (temp=rev)
    printf(" a palindrome no");
    else 
    printf (" not a palindrome no");
    return 0;
}