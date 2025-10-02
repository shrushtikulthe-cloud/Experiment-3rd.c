#include <stdio.h>
int main() {
    float temp;
    printf("Enter Sensor Temperature: ");
    scanf("%f", &temp);

    if (temp < 80) printf("Normal\n");
    else if (temp <= 100) printf("Warning\n");
    else printf("Critical\n");

    return 0;
}
