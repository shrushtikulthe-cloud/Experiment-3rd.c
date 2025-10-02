#include <stdio.h>
int main() {
    float wind;
    printf("Enter Wind Speed (km/h): ");
    scanf("%f", &wind);

    if (wind < 20)
        printf("Calm\n");
    else if (wind <= 50)
        printf("Breezy\n");
    else
        printf("Stormy\n");

    return 0;
}
