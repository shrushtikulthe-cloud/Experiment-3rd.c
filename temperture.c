#include <stdio.h>

int main() {
    float Threshold = 80.0, Critical = 100.0, Sensor_temperature;

    // Prompt user
    printf("Enter Sensor Temperature: ");
    scanf("%f", &Sensor_temperature);

    if (Sensor_temperature < Threshold) {
        printf("Normal...!\n");
    }
    else if (Sensor_temperature >= Threshold && Sensor_temperature <= Critical) {
        printf("Warning...!\n");
    }
    else {
        printf("Critical...!\n");
    }

    return 0;
}
