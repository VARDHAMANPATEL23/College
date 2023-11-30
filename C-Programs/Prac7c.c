// PRAC7C.c
#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin); // Input string using gets (Note: gets is not recommended, but used here for simplicity.You can use fget)

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}