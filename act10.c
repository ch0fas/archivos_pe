#include <stdio.h>

typedef struct
{
    char name[20];
    int qty;
    float price;
} Product;

Product register_product(char name[20], int qty, float price)
{
    Product p;
    strcpy(p.name, name);

}

int main()
{
    int opcion_ejercicio = 4;
    Product products[1024];
    while (opcion_ejercicio != 0)
    {
        printf("Elige tu acción (1- Registrar, 2 - Inventario, 3 - Buscar por Nombre");

    }
    return 0;
}
