#include <stdio.h>
int main() {
    int marks, attendance;
    printf("Enter Marks: ");
    scanf("%d", &marks);
    printf("Enter Attendance Percentage: ");
    scanf("%d", &attendance);

    if (marks >= 40 && attendance >= 75)
        printf("Eligible for Exam\n");
    else
        printf("Not Eligible\n");

    return 0;
}
