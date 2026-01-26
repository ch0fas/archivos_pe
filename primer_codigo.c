#include <stdio.h>

int main(int argc, char** argv)
{
    // Declarando variable, sin valor
    int n;
    int age;
    // Declarando valor e inicializar una variable
    char nombre[] = "Sofia";
    int edad = 20;
    char dia[] = "Martes";
    float temperatura = 35.6123;
    printf("EL número entero es: %d.\nTu nombre es %s,\ntu edad es %s.\nLa temperatura de hoy es %.2f\n", edad, nombre, argv[1], temperatura);
    n = printf("La palabra es: %s\n", nombre);
    printf("%d", n);
    return 0;
}
