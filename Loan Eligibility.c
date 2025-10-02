#include <stdio.h>
int main() {
    int income;
    printf("Enter Monthly Income: ");
    scanf("%d", &income);

    if (income >= 50000)
        printf("Eligible for Loan\n");
    else
        printf("Not Eligible\n");

    return 0;
}
