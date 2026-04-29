#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    char name[20];
    char last_name[20];
} Name;

typedef struct
{
    Name name;
    char position[20];
    int salary;
} Employee;

void printEmployee(Employee emp)
{
    printf("Name: %s %s\n", emp.name.name, emp.name.last_name);
    printf("Position: %s\n", emp.position);
    printf("Salary: %d\n", emp.salary);
}

void printHighestLowest(Employee employees[], int size)
{
    int highest = 0;
    int lowest = 0;

    for (int i = 1; i < size; i++)
    {
        if (employees[i].salary > employees[highest].salary)
            highest = i;

        if (employees[i].salary < employees[lowest].salary)
            lowest = i;
    }

    printf("\nHighest Salary:\n");
    printEmployee(employees[highest]);

    printf("\nLowest Salary:\n");
    printEmployee(employees[lowest]);
}

int main()
{
    Employee highest_salary = {};
    Employee lowest_salary;
    srand(time(NULL));

    const char *firstNames[] = {
        "Juan", "Ema", "Luis", "Sofia", "Nicolas",
        "Olivia", "Javier", "Maria", "Lucas", "Ale"
    };

    const char *lastNames[] = {
        "Garcia", "Maldonado", "Hernandez", "Rodriguez", "Robles",
        "Vazquez", "Toledo", "Aguilar", "Lopez", "Obrador"
    };

    const char *positions[] = {
        "Manager", "Engineer", "Designer", "Analyst", "Clerk"
    };

    Employee employees[5];

    for (int i = 0; i < 5; i++)
    {
        snprintf(employees[i].name.name, sizeof(employees[i].name.name), "%s",
                 firstNames[rand() % 10]);

        snprintf(employees[i].name.last_name, sizeof(employees[i].name.last_name), "%s",
                 lastNames[rand() % 10]);

        snprintf(employees[i].position, sizeof(employees[i].position), "%s",
                 positions[rand() % 5]);

        employees[i].salary = 30000 + rand() % 70001;
    }

    for (int i = 0; i < 5; i++)
        {
            printf("Employee %d:\n", i + 1);
            printEmployee(employees[i]);
            printf("\n");
        }

        printHighestLowest(employees, 5);

    return 0;
}