#include <stdio.h>
int main() {
    float attended, total;
    printf("Enter Classes Attended: ");
    scanf("%f", &attended);
    printf("Enter Total Classes: ");
    scanf("%f", &total);

    float percentage = (attended / total) * 100;
    printf("Attendance: %.2f%%\n", percentage);

    if (percentage >= 75) printf("Allowed in Exam\n");
    else printf("Not Allowed\n");

    return 0;
}
