#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    float price;
    int qty;
    char name[20];
} Product;

Product register_product(char name[20], int qty, float price)
{
    Product p;
    strcpy(p.name, name);
    p.qty = qty; p.price = price;
    return p;
}

Product search_product_by_name(char name[20], Product product_array[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        if (strcmp(product_array[i].name, name) == 0)
        {
            return product_array[i];
        }
    }
    Product empty = {0, 0,""};
    return empty;
}

int main()
{
    int opcion_ejercicio = 4;

    Product products[5];
    int array_size = 0;

    char register_name[20];
    int register_qty;
    float register_price;
    Product new_registered_product;
    float total_inv_value;

    char lookup_name[20];
    Product obtained_product;
    while (opcion_ejercicio != 0)
    {
        printf("\n\nElige tu acción (0- Salir, 1- Registrar, 2 - Inventario, 3 - Buscar por Nombre: ");
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
            products[array_size] = new_registered_product;
            array_size++;
            printf("\nProducto %s registrado exitosamente!", products[array_size].name);
            break;

            case 2:
            printf("\n\nVisualizando productos...");
            for (int i = 0; i < (array_size); i++)
            {
                printf("\nProducto %d: %s, %d unidades, $%.2f Precio Unitario", i, products[i].name, products[i].qty, products[i].price);
                total_inv_value += (products[i].qty * products[i].price);
            }
            printf("\nTotal Inventory Value: %.2f", total_inv_value);
            total_inv_value = 0;
            break;

            case 3:
            printf("\nObten producto por nombre!");
            printf("\nEscribe el nombre del producto: ");
            scanf("%19s", lookup_name);
            obtained_product = search_product_by_name(lookup_name, products, array_size);
            if (strlen(obtained_product.name) > 0)
            {
                printf("\n[PRODUCT NAME]: %s", obtained_product.name);
                printf("\n[PRODUCT QTY]: %d", obtained_product.qty);
                printf("\n[PRODUCT PRICE]: %.2f", obtained_product.price);
            } else
            {
                printf("\n---No se encontró el producto!---");
            }

            case 0:
            break;
        }

    }
    return 0;
}
