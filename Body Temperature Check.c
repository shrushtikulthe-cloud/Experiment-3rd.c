#include <stdio.h>
int main() {
    float temp;
    printf("Enter Body Temperature (°C): ");
    scanf("%f", &temp);

    if (temp < 37.0)
        printf("Normal\n");
    else if (temp <= 38.5)
        printf("Mild Fever\n");
    else
        printf("High Fever\n");

    return 0;
}
