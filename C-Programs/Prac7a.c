// PRAC7A.c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int vowels = 0, consonant = 0;

    printf("Enter a string: ");
    gets(str); // Input string using gets (Note: gets is not recommended, but used here for simplicity)

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else
        {
            consonant++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonant);

    return 0;
}