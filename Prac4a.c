#include <stdio.h>
void main()
{
    int marks;
    printf("Enter marks from 1 to 100 : ");
    scanf("%d", &marks);

    if (marks <= 100 || marks >= 80)
    {
        printf("Distinction.\n");
    }
    else if (marks <= 79 || marks >= 60)
    {
        printf("First Class.\n");
    }
    else if (marks <= 59 || marks >= 40)
    {
        printf("Second Class.\n");
    }
    else if (marks < 40)
    {
        printf("Fail.\n");
    }
    else
    {
        printf("Wrong input marks.\n");
    }
}