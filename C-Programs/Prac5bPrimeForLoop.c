// PRAC5B(FL).c
#include <stdio.h>
void main()
{
    int N, D, Temp;
    printf("Enter an integer number:");
    scanf("%d", &N);

    if (N == 0 || N == 1)
    {
        Temp = 1;
    };
    for (D = 2; D <= N / 2; ++D)
    {
        if (N % D == 0)
        {
            Temp = 1;
            break;
        }
    }
    if (Temp == 1)
    {
        printf("%d is not a Prime Number.", N);
    }
    else
    {
        printf("%d is a Prime Number.", N);
    }
}