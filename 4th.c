#include <stdio.h>
int main() {
    float temp;
    printf("Enter Sensor Temperature: ");
    scanf("%f", &temp);

    if (temp < 100) {
        if (temp < 80) printf("Normal\n");
        else printf("Warning\n");
    } else {
        printf("Critical\n");
    }
    return 0;
}

