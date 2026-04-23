#include <stdio.h>
#include <string.h>

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
    p.qty = qty; p.price = price;
    return p;
}

int main()
{
    int opcion_ejercicio = 4;
    Product products[5];
    int array_size = 0;
    Product tornillo = {"Tornillo", 10, 1.5};
    products[0] = tornillo;

    char register_name[20];
    int register_qty;
    float register_price;
    Product new_registered_product;
    while (opcion_ejercicio != 0)
    {
        printf("\n\nElige tu acción (1- Registrar, 2 - Inventario, 3 - Buscar por Nombre: ");
        scanf("%d", &opcion_ejercicio);
        switch (opcion_ejercicio)
        {
            case 1:
            printf("\n\nRegistro De Producto");
            printf("\nEscribe el nombre del producto: ");
            scanf("%s", register_name);
            printf("\nEscribe la cantidad que tienes: ");
            scanf("%d", &register_qty);
            printf("\nEscribe su precio unitario: ");
            scanf("%f", &register_price);
            new_registered_product = register_product(register_name, register_qty, register_price);
            array_size++;
            products[array_size] = new_registered_product;
            printf("\nProducto registrado exitosamente!");
            break;

            case 2:
            printf("\n\nVisualizando productos...");
            for (int i = 0; i < (sizeof(products) / sizeof(products[0])); i++)
            {
                printf("\nProducto %d: %s, %d unidades, $%.2f Precio Unitario", i, products[i].name, products[i].qty, products[i].price);
            }
        }

    }
    return 0;
}
