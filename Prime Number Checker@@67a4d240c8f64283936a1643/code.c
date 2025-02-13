#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
    // If n is less than 2, it is not a prime number
    if (n <= 1) {
        return 0;
    }
    // Check if n has any divisors other than 1 and itself
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
