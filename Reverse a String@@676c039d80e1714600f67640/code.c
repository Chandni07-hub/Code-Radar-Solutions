// Your code here...
int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, current = 1, index = 0;

    while (missingCount < k) {
        if (index < n && arr[index] == current) {
            index++; // Skip the number that exists in the array
        } else {
            missingCount++; // Count this as a missing number
            if (missingCount == k) {
                return current; // Return the K-th missing number
            }
        }
        current++; // Move to the next number
    }
    return -1; // This line should not be reached
}