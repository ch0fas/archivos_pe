#include <stdio.h>

int main()
{
    int number = -1;
    if ((number > 0)) printf("Este es un número positivo!\n");

    // Condición doble
    if (number == 0)
    {
        printf("Es cero!\n");
    } else
    {
        printf("Es un número diferente a cero!\n");
        printf("El número es %d\n", number);
    }
    return 0;
}
