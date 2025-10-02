#include <stdio.h>
int main() {
    float speed;
    printf("Enter Speed (km/h): ");
    scanf("%f", &speed);

    if (speed < 40)
        printf("Too Slow\n");
    else if (speed <= 80)
        printf("Normal Speed\n");
    else
        printf("Overspeeding\n");

    return 0;
}
