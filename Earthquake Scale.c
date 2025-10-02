#include <stdio.h>
int main() {
    float scale;
    printf("Enter Richter Scale Value: ");
    scanf("%f", &scale);

    if (scale < 4.0)
        printf("Minor\n");
    else if (scale < 6.0)
        printf("Moderate\n");
    else if (scale < 7.0)
        printf("Strong\n");
    else
        printf("Severe\n");

    return 0;
}
