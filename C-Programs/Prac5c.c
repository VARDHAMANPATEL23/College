// PRAC5C.c
#include <stdio.h>

int main()
{
    int choice, rows;

    printf("Choose a pattern to print:\n");
    printf("1. Right Triangle\n");
    printf("2. Pyramid\n");
    printf("3. Right Triangle of Numbers\n");
    printf("4. Upside-down Right Triangle of Alphabets\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Right Triangle
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;

    case 2: // Pyramid
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        for (int i = 1; i <= rows; i++)
        {
            for (int space = 1; space <= rows - i; space++)
            {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 3: // Right Triangle of Numbers
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
        break;

    case 4: // Upside-down Right Triangle of Alphabets
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        for (int i = rows; i >= 1; i--)
        {
            char ch = 'A';
            for (int j = 1; j <= i; j++)
            {
                printf("%c ", ch);
                ch++;
            }
            printf("\n");
        }
        break;

    default:
        printf("Invalid choice.\n");
    }

    return 0;
}