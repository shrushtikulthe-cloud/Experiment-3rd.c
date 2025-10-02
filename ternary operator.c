#include <stdio.h>
int main() {
    float temp;
    printf("Enter Sensor Temperature: ");
    scanf("%f", &temp);

    (temp < 80) ? printf("Normal\n") :
    (temp <= 100) ? printf("Warning\n") : printf("Critical\n");

    return 0;
}
