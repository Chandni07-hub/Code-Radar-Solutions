#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

// Function to swap two Student structures
void swap(struct Student* a, struct Student* b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort students by marks in descending order
void sortStudentsByMarks(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of Student structures
    struct Student students[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].rollNumber);
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    // Sort the students by marks in descending order
    sortStudentsByMarks(students, n);

    // Print the sorted list of students
    printf("\nSorted list of students by marks (descending order):\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
               students[i].rollNumber, students[i].name, students[i].marks);
    }

    return 0;
}
