#include <stdio.h>
#include <math.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            count++;
    }
    printf("%d\n", count);
    return 0;
}