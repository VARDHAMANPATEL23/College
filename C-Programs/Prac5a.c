// PRAC5A.c
#include <stdio.h>

int main()
{
    int number = 2; // Starting from the first even number
    int sum = 0;

    while (number <= 100)
    {
        sum += number;
        number += 2; // Move to the next even number
    }

    printf("Sum of even numbers between 1 and 100: %d\n", sum);

    return 0;
}
