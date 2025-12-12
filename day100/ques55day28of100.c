//Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
int is_prime(int num) {
    if(num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            return 0; // Found a divisor, not prime
        }
    }
    return 1; // No divisors found, it's prime
}