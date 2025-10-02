#include <stdio.h>
int main() {
    float salary;
    printf("Enter Salary: ");
    scanf("%f", &salary);

    if (salary < 250000)
        printf("No Tax\n");
    else if (salary <= 500000)
        printf("Tax = 5%%\n");
    else if (salary <= 1000000)
        printf("Tax = 20%%\n");
    else
        printf("Tax = 30%%\n");

    return 0;
}
