#include <stdio.h>
int main() {
    int aqi;
    printf("Enter AQI Value: ");
    scanf("%d", &aqi);

    if (aqi <= 50)
        printf("Good\n");
    else if (aqi <= 100)
        printf("Moderate\n");
    else
        printf("Unhealthy\n");

    return 0;
}
