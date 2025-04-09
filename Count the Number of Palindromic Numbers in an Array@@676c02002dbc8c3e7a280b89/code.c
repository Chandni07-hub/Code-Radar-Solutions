#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int count = 0;
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    // Output result
    printf("%d\n", count);
    
    return 0;
}
