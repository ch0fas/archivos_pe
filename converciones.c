#include <stdio.h>

int main()
{
    char letter = 'C';
    float floatie = 89.67;
    int number = 6;
    printf("El entero del caracter es: %i\n", letter); // conversión implicita
    printf("El flotante es: %.2f\n", floatie);
    printf("El entero del flotante es: %i\n", floatie); // conversión implicita

    //Conversión Explicita
    printf("El flotante del entero es: %f\n", (float)number);
    printf("El entero del flotante es: %d\n", (int)floatie);

    return 0;
}
