#include <stdio.h>
int main() {
    int marks;
    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks >= 85) printf("Eligible for Scholarship\n");
    else printf("Not Eligible\n");

    return 0;
}
