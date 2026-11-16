#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTop(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d",
              students[i].name,
              &students[i].roll,
              &students[i].marks);
    }

    struct Student top = findTop(students, n);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}