/ Your code here...
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, allPassed = 1;

    // Input number of students
    scanf("%d", &n);

    struct Student s[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
        if (s[i].marks < 50) {
            allPassed = 0; // At least one student failed
        }
    }

    // Output result
    if (allPassed) {
        printf("All Passed\n");
    } else {
        printf("Not All Passed\n");
    }

    return 0;
}