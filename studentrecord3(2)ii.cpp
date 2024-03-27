#include <stdio.h>
struct Student {
    int roll_no;
    char name[50];
    char gender;
    int marks[5]; 
    float percentage;
};
void calculatePercentage(struct Student *s) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += s->marks[i];
    }
    s->percentage = (float)total / 5;
}
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}
void sortByPercentage(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].percentage < students[j + 1].percentage) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Gender (M/F): ");
        scanf(" %c", &students[i].gender);
        printf("Enter marks of 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
        calculatePercentage(&students[i]);
    }
    sortByPercentage(students, n);
    printf("\nStudent List Sorted by Percentage:\n");
    printf("Roll No\tName\tGender\tPercentage\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%c\t%.2f%%\n", students[i].roll_no, students[i].name, students[i].gender, students[i].percentage);
    }

    return 0;
}

