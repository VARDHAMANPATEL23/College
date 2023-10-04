// PRAC5B(DWL).c
#include <stdio.h>

int main()
{
    int num, i = 2;
    int isPrime = 1; // Assuming the number is prime initially

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    }
    else if (num == 2)
    {
        isPrime = 1; // 2 is special case of prime Number
    }
    else
    {
        do
        {
            if (num % i == 0)
            {
                isPrime = 0; // Number is divisible, not prime
                break;
            }
            i++;
        } while (i <= num / 2);
    }

    if (isPrime)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
