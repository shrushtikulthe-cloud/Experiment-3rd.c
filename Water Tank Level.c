#include <stdio.h>
int main() {
    int level;
    printf("Enter Tank Level (%%): ");
    scanf("%d", &level);

    if (level < 30)
        printf("Low Water Level\n");
    else if (level <= 70)
        printf("Medium Water Level\n");
    else
        printf("High Water Level\n");

    return 0;
}
