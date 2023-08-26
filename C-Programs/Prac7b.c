#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    char str3[50];
    char str4[] = "Hello";
    char str5[] = "Hello, World!";

    // strcat(): Concatenates str2 to str1
    strcat(str1, str2);
    printf("After strcat(): %s\n", str1);

    // strcmp(): Compares str1 and str4
    int result = strcmp(str1, str4);
    if (result == 0)
    {
        printf("str1 and str4 are equal.\n");
    }
    else if (result < 0)
    {
        printf("str1 is less than str4.\n");
    }
    else
    {
        printf("str1 is greater than str4.\n");
    }

    // strcpy(): Copies str4 to str3
    strcpy(str3, str4);
    printf("After strcpy(): %s\n", str3);

    // strlen(): Calculates the length of str5
    int length = strlen(str5);
    printf("Length of str5: %d\n", length);

    return 0;
}