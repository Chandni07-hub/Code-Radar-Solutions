// Your code here...
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};

char getGrade(float marks) {
    if (marks >= 85) return 'A';
    else if (marks >= 70) return 'B';
    else return 'C';
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    for (int i = 0; i < n; i++) {
        char grade = getGrade(s[i].marks);
        printf("Roll Number: %d, Name: %s, Grade: %c\n", s[i].roll, s[i].name, grade);
    }

    return 0;
}