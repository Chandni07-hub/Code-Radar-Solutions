#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    // First set of numbers
    int numbers1[] = {2, 3, 4, 5, 6}; 
    int n1 = sizeof(numbers1) / sizeof(numbers1[0]);

    // Second set of numbers
    int numbers2[] = {2, 4, 5, 9, 13, 17}; 
    int n2 = sizeof(numbers2) / sizeof(numbers2[0]);

    // Printing first set of results
    printf("Output for the first set of numbers: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", is_prime(numbers1[i]));
    }
    printf("\n");

    // Printing second set of results
    printf("Output for the second set of numbers: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", is_prime(numbers2[i]));
    }
    printf("\n");

    return 0;
}
