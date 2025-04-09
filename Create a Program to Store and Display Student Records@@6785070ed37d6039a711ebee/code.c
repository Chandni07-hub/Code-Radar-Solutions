#include <stdio.h>

// Define the structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int N;

    // Ask for the number of students
    printf("Enter number of students: ");
    scanf("%d", &N);

    // Create an array of students
    struct Student students[N];

    // Input student data
    printf("Enter roll number, name, and marks for each student:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < N; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}
