#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    // Input details of 5 students
    for (i = 0; i < 5; i++) {
        scanf("%s %d %f",
              students[i].name,
              &students[i].roll,
              &students[i].marks);
    }

    // Print details in tabular form
    printf("Name\tRoll\tMarks\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t%d\t%.2f\n",
               students[i].name,
               students[i].roll,
               students[i].marks);
    }

    return 0;
}