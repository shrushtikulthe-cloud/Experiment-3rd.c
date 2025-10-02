#include <stdio.h>
int main() {
    int rate;
    printf("Enter Heart Rate (bpm): ");
    scanf("%d", &rate);

    if (rate < 60)
        printf("Low\n");
    else if (rate <= 100)
        printf("Normal\n");
    else
        printf("High\n");

    return 0;
}
