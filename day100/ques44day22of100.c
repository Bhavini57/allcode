//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;
    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // Calculate the sum of the series
    for(i = 1; i <= n; i++) {
        sum += (float)(2 * i - 1) / (2 * i);
    }
    // Display the sum of the series
    printf("Sum of the series up to %d terms is: %.2f\n", n, sum);
    return 0;
}



