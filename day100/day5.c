#include <stdio.h>
#include <math.h>   

int main() 
{
    float p, rate, time;
    float si, ci, amount;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    si = (p * rate * time) / 100;

    amount = p * pow((1 + rate / 100), time);
    ci = amount - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}

//calc simple and compound interest
//help in math.h pow 