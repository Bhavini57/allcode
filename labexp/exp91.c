#include <stdio.h>
struct Complex 
{
    float real;
    float imag;
};
struct Complex readComplex() 
{
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}
void printComplex(struct Complex c) 
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}
struct Complex add(struct Complex a, struct Complex b) 
{
    struct Complex r;
    r.real = a.real + b.real;
    r.imag = a.imag + b.imag;
    return r;
}

// function for subtraction
struct Complex sub(struct Complex a, struct Complex b) 
{
    struct Complex r;
    r.real = a.real - b.real;
    r.imag = a.imag - b.imag;
    return r;
}

int main() 
{
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    c1 = readComplex();

    printf("Enter second complex number:\n");
    c2 = readComplex();

    sum = add(c1, c2);
    diff = sub(c1, c2);

    printf("\nFirst number: ");
    printComplex(c1);

    printf("Second number: ");
    printComplex(c2);

    printf("Addition: ");
    printComplex(sum);

    printf("Subtraction: ");
    printComplex(diff);

    return 0;
}
