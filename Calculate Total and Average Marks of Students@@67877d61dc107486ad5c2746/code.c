#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;
    float sum = 0.0, average;

    scanf("%d", &n);  // Number of students

    struct Student s[n];

    // Input student details and calculate sum
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
        sum += s[i].marks;
    }

    // Calculate average
    average = sum / n;

    // Output total and average marks
    printf("Total Marks: %.2f\n", sum);
    printf("Average Marks: %.2f\n", average);

    return 0;
}.