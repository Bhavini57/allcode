#include <stdio.h>
int main()
{
 int a[10] = {10,20,30,40};
 int n = 4;
 int pos = 2;     // index where to insert
 int value = 25;

 for(int i = n; i > pos; i--)
    a[i] = a[i-1];

 a[pos] = value;
 n++;
 return 0; 
}