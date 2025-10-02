#include <conio.h>
#include <stdio.h>

void main()
{
    int a, b, choice;
    clrscr();
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter 1 for addition, 2 for subtraction: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Sum is: %d", a + b);
    }
    else if (choice == 2)
    {
        printf("Difference is: %d", a - b);
    }
    else
    {
        printf("Invalid choice.");
    }
    getch();
}
