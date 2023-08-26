#include <stdio.h>

int main()
{
    double num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Swapping using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping:\n");
    printf("First number: %.2lf\n", num1);
    printf("Second number: %.2lf\n", num2);

    return 0;
}
