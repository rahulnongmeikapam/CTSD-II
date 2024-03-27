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
    printf("\nStudent Records:\n");
    printf("Roll No\tName\tGender\tPercentage\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t%c\t%.2f%%\n", students[i].roll_no, students[i].name, students[i].gender, students[i].percentage);
    }

    return 0;
}

