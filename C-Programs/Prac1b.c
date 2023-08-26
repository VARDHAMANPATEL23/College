#include <stdio.h>

int main()
{
    int integerVar;
    float floatVar;
    double doubleVar;
    char charVar;

    printf("Enter an integer: ");
    scanf("%d", &integerVar);

    printf("Enter a floating-point number: ");
    scanf("%f", &floatVar);

    printf("Enter a double number: ");
    scanf("%f", &doubleVar);

    printf("Enter a character: ");
    scanf(" %c", &charVar);

    printf("\nValues entered:\n");
    printf("Integer: %d\n", integerVar);
    printf("Float: %f\n", floatVar);
    printf("Double: %f\n", doubleVar);
    printf("Character: %c\n", charVar);

    return 0;
}
