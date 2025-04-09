// Your code here...
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i, lowIndex = 0;

    // Input number of students
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
        if (s[i].marks < s[lowIndex].marks || i == 0) {
            lowIndex = i;
        }
    }

    // Output: Student with lowest marks
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",
           s[lowIndex].roll, s[lowIndex].name, s[lowIndex].marks);

    return 0;
}