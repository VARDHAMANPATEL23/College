// PRAC8A.c
#include <stdio.h>

int sumOfFirstNNumbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        int result = sumOfFirstNNumbers(n);
        printf("Sum of the first %d numbers: %d\n", n, result);
    }

    return 0;
}
