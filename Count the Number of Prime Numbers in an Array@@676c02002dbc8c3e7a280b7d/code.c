#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= (int)sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;  // Input error check

    if (n <= 0) {
        printf("0\n");
        return 0;
    }

    int arr[1000];  // Safe limit, adjust as needed

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;  // Input error check
    }

    int prime_count = 0;
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            prime_count++;
        }
    }

    printf("%d\n", prime_count);
    return 0;
}
