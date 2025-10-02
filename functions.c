#include <stdio.h>

void checkTemp(float t) {
    if (t < 80) printf("Normal\n");
    else if (t <= 100) printf("Warning\n");
    else printf("Critical\n");
}

int main() {
    float temp;
    printf("Enter Sensor Temperature: ");
    scanf("%f", &temp);

    checkTemp(temp);
    return 0;
}
