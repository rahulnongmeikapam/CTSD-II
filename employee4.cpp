#include <stdio.h>
#include <string.h>
struct Employee {
    int EMP_ID;
    char EMP_NAME[50];
    int EMP_DEPTID;
    char EMP_PHNO[15];
    float EMP_SALARY;
};
void swap(struct Employee *a, struct Employee *b) {
    struct Employee temp = *a;
    *a = *b;
    *b = temp;
}

void sortByName(struct Employee arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (strcmp(arr[j].EMP_NAME, arr[j+1].EMP_NAME) > 0) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


void displayEmployees(struct Employee arr[], int n) {
    printf("EMP_ID\tEMP_NAME\tEMP_DEPTID\tEMP_PHNO\t\tEMP_SALARY\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%d\t\t%s\t\t%.2f\n", arr[i].EMP_ID, arr[i].EMP_NAME, arr[i].EMP_DEPTID, arr[i].EMP_PHNO, arr[i].EMP_SALARY);
    }
}
int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("EMP_ID: ");
        scanf("%d", &employees[i].EMP_ID);
        printf("EMP_NAME: ");
        scanf("%s", employees[i].EMP_NAME);
        printf("EMP_DEPTID: ");
        scanf("%d", &employees[i].EMP_DEPTID);
        printf("EMP_PHNO: ");
        scanf("%s", employees[i].EMP_PHNO);
        printf("EMP_SALARY: ");
        scanf("%f", &employees[i].EMP_SALARY);
    }
    sortByName(employees, n);
    printf("\nEmployee Details (Sorted by EMP_NAME):\n");
    displayEmployees(employees, n);
    return 0;
}

