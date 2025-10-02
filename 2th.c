#include <stdio.h>

int main() {
    float Threshold = 80.0, Critical = 100.0, temp;

    printf("Enter Sensor Temperature: ");
    scanf("%f", &temp);

    if (temp < Critical) {
        if (temp < Threshold) {
            printf("Normal...!\n");
        } else {
            printf("Warning...!\n");
        }
    } else {
        printf("Critical...!\n");
    }

    return 0;
}
