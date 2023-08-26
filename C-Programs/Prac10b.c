#include <stdio.h>

int main()
{
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Characters and their addresses in the string:\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("Character: %c, Address: %p\n", str[i], &str[i]);
    }

    return 0;
}