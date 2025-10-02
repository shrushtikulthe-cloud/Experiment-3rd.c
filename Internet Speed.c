#include <stdio.h>
int main() {
    float speed;
    printf("Enter Internet Speed (Mbps): ");
    scanf("%f", &speed);

    if (speed < 10)
        printf("Slow\n");
    else if (speed <= 50)
        printf("Normal\n");
    else
        printf("Fast\n");

    return 0;
}
