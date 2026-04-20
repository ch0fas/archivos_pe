#include <stdio.h>

struct Empleado
{
    char name[50];
    int hours;
    float hourly_pay;
}pixie;

typedef struct Empleado Empleado;

float calc_sueldo(Empleado employee)
{
    return employee.hours*employee.hourly_pay;
}

int main()
{
    snprintf(pixie.name, sizeof(pixie.name),"Sofi");
    pixie.hours = 30;
    pixie.hourly_pay = 500;

    printf("Total pay of %s: %f", pixie.name, calc_sueldo(pixie));

    return 0;
}
