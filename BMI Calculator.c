#include <stdio.h>
int main() {
    float weight, height, bmi;
    printf("Enter Weight (kg): ");
    scanf("%f", &weight);
    printf("Enter Height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 25)
        printf("Normal\n");
    else if (bmi < 30)
        printf("Overweight\n");
    else
        printf("Obese\n");

    return 0;
}
