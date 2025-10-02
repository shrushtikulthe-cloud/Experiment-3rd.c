#include <stdio.h>
int main() {
    int fuel;
    printf("Enter Fuel Level (litres): ");
    scanf("%d", &fuel);

    if (fuel < 5)
        printf("Refuel Needed\n");
    else if (fuel <= 20)
        printf("Sufficient\n");
    else
        printf("Full Tank\n");

    return 0;
}
