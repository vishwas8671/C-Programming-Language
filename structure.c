#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    int marks[3];
    int totalMarks;
};

int main() {
    struct Student students[10];
    int i, j;

    // Inputting data for 10 students
    for (i = 0; i < 10; ++i) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter marks in 3 subjects:\n");
        for (j = 0; j < 3; ++j) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Calculating total marks and displaying details for each student
    printf("\n\nDetails of Students:\n");
    for (i = 0; i < 10; ++i) {
        students[i].totalMarks = 0;
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks in 3 subjects: ");
        for (j = 0; j < 3; ++j) {
            printf("%d ", students[i].marks[j]);
            students[i].totalMarks += students[i].marks[j];
        }
        printf("\nTotal Marks: %d\n", students[i].totalMarks);
    }

    return 0;
}
