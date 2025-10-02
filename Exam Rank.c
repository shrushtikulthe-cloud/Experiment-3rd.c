#include <stdio.h>
int main() {
    int rank;
    printf("Enter Exam Rank: ");
    scanf("%d", &rank);

    if (rank <= 10)
        printf("Topper\n");
    else if (rank <= 50)
        printf("Average Performer\n");
    else
        printf("Needs Improvement\n");

    return 0;
}
