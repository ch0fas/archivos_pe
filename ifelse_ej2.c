#include <stdio.h>

int main()
{

    int num_1;
    int num_2;
    int num_3;
    int biggest;
    printf("Escribe 3 números enteros, separados por espacios: ");
    scanf("%d %d %d", &num_1, &num_2, &num_3);

    if (num_1 > num_2)
    {
        if (num_1 > num_3)
        {
            biggest = num_1;
        }
    } else if (num_2 > num_3)
    {
        biggest = num_2;
    } else
    {
        biggest = num_3;
    }

    printf("El entero más grande es %d", biggest);
    return 0;
}
