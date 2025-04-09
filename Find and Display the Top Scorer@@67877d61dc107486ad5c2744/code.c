#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i, topIndex = 0;
    scanf("%d", &n);  // Number of students

    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;  // Track student with highest marks
        }
    }

    // Output: Student with highest marks
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",
           s[topIndex].roll, s[topIndex].name, s[topIndex].marks);

    return 0;
}