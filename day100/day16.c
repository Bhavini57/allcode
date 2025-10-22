#include <stdio.h>
int main ()
{
    int n, bin=0 ,rem,place=1,  rev;

    printf("enter the no");
    scanf("%d",&n);

     while (n != 0)
    {
        rem = n % 2;           
        bin = bin + rem * place;
        n = n / 2;
        place = place * 10; 

    }
    printf("rev binary no of %d are %d", n, bin);
    return 0;
}