#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int hours;
    float hourly_pay;
} Empleado;

typedef struct
{
    char name[50];
    float total_pay;
} Empleado_Simple;

Empleado_Simple get_hourly_pay(Empleado employee)
{
    Empleado_Simple s1;
    strcpy(s1.name, employee.name);
    s1.total_pay = employee.hourly_pay * employee.hours;
    return s1;
}

int main()
{
    // Dandole valores al empleado original
    Empleado e1;
    Empleado_Simple s1;
    snprintf(e1.name, sizeof(e1.name),"Daniel");
    e1.hours = 30;
    e1.hourly_pay = 500;
    s1 = get_hourly_pay(e1);
    printf("El empleado %s gana %.2f en una semana!", s1.name, s1.total_pay);
    return 0;
}
