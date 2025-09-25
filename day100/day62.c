#include <stdio.h>
int main()
{
    int n ;
    printf("enter the number:");
    scanf("%d", &n);

    if (n>0)
    {
     printf("%d is positive number\n", n);
    
    }
    else
    {
       if (n<0)
       {
        printf("%d is negative number\n",n);
       }
        else
      {
        printf("%d is zero\n",n );
      }
       
     } 
     
    return 0;
}