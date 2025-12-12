 // Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, circumference;
    
    // Input radius
   printf("Enter radius of the circle: ");

    scanf("%f", &radius);
    
    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    // Display results with two decimal places
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    
    return 0;
}
