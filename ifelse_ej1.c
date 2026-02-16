#include <stdio.h>

int main()
{
    float original_price;
    int client_type;
    float final_price;

    printf("Escribe el precio original de tu articulo: ");
    scanf("%f", &original_price);
    printf("\nEres cliente nuevo (0), regular (1) o VIP(2)? ");
    scanf("%d", &client_type);

    if (client_type == 0) final_price = original_price;
    if (client_type == 1) final_price = original_price*0.9;
    if (client_type == 2) final_price = original_price*0.8;

    printf("\nTu precio final es: $%.2f", final_price);

    return 0;
}
