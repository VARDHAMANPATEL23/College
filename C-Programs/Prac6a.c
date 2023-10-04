// PRAC6A.c
#include <stdio.h>

int main()
{
    int numbers[10];
    int max, min;

    // Input phase
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize max and min with the first number
    max = min = numbers[0];

    // Find maximum and minimum
    for (int i = 1; i < 10; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    // Output the result
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}
