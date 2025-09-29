//swaping the value with the helpp of function
#include <stdio.h>

void swap(int a, int b) 
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap: a = %d, b = %d\n", a, b);
}

int main() 
{
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    
    swap(x, y);   // values are copied
    
    printf("After swap (in main): x = %d, y = %d\n", x, y);
    return 0;
}
