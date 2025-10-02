#include <stdio.h>
int main() {
    float rain;
    printf("Enter Rainfall (mm): ");
    scanf("%f", &rain);

    if (rain < 20)
        printf("Low Rainfall\n");
    else if (rain <= 60)
        printf("Moderate Rainfall\n");
    else
        printf("Heavy Rainfall\n");

    return 0;
}
