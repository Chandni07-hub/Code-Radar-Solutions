// Your code here...
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, count = 0;
    float threshold;
    // Input number of students
    scanf("%d", &n);
    struct Student s[n];
    // Input student data
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    // Input threshold marks
    scanf("%f", &threshold);
    // Count students scoring above threshold
    for (int i = 0; i < n; i++) {
        if (s[i].marks > threshold) {
            count++;
        }
    }
    // Output result
    printf("Count of students scoring above %.2f: %d\n", threshold, count);
    return 0;
}