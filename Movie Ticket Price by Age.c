#include <stdio.h>
int main() {
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);

    if (age < 12)
        printf("Ticket = 100\n");
    else if (age <= 60)
        printf("Ticket = 200\n");
    else
        printf("Ticket = 150\n");

    return 0;
}
