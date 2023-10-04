// PRAC9A.c
#include <stdio.h>

// Define the structure
struct employee
{
    char name[50];
    char dateOfJoining[20];
    float salary;
};

int main()
{
    struct employee emp; // Declare a structure variable

    // Input phase
    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", emp.name);

    printf("Date of Joining: ");
    scanf("%s", emp.dateOfJoining);

    printf("Salary: ");
    scanf("%f", &emp.salary);

    // Display the employee information
    printf("\nEmployee Information:\n");
    printf("Name: %s\n", emp.name);
    printf("Date of Joining: %s\n", emp.dateOfJoining);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
