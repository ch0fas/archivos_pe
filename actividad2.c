#include <stdio.h>

int main()
{
    // Declaraciónes de Variables
    float flotante_2;
    double doble_2;
    int entero_3;
    float flotante_3;
    char palabra_3[32]; // Solo puede ser de 32 caracteres máximo la palabra
    char ch_3;
    char nombre_4[32];
    char apellido_paterno_4[32];
    char apellido_materno_4[32];
    char pch_5;
    char sch_5;
    int pint_6; // Primer int
    int sint_6; // Segundo int
    int tint_6; // Tercer int
    int cint_6; // Cuarto int

    // Flujo del programa
    printf("EJERCICIO 2 == Flotante y Doble\n");
    printf("Escribe un flotante: ");
    scanf("%f", &flotante_2);
    printf("Escribe un doble: ");
    scanf("%lf", &doble_2);
    printf("\nTu flotante es: %.2f\nTu doble es: %.2lf\n\n\n", flotante_2, doble_2);

    printf("EJERCICIO 3 == Carácter con entrada previa múltiple\n");
    printf("Escribe un número entero, un flotante, y una palabra, separados por espacios. Después, presiona enter (las veces que gustes) y escribe un caracter\n");
    scanf("%d %f %s\n", &entero_3, &flotante_3, palabra_3);
    scanf("%c", &ch_3);
    printf("\nEntero: %d\nFlotante: %f\nPalabra: %s\nCaracter: %c\n\n\n", entero_3, flotante_3, palabra_3, ch_3);

    printf("EJERCICIO 4 == Nombre Completo con Múltiples Marcadores\n");
    printf("Escribe tu nombre (solo uno), tu apellido paterno y tu apellido materno, separados por espacios: ");
    scanf("%s %s %s", nombre_4, apellido_paterno_4, apellido_materno_4);
    printf("Te llamas %s %s %s\n\n\n", nombre_4, apellido_paterno_4, apellido_materno_4);

    // Para este, asumo que quiere que el ususario ponga dos caracteres uno tras otro y los agarre como distintos?
    printf("EJERCICIO 5 == Dos Caracteres\n");
    printf("Escribe dos caracteres, uno tras otro (Por ejemplo, BL): ");
    scanf(" %c%c", &pch_5, &sch_5);
    printf("Tus caracteres son: %c%c\n\n\n", pch_5, sch_5);

    printf("EJERCICIO 6 == Validación del entero\n");
    printf("Escribe 4 números enteros, con un espacio entre cada uno: ");
    int totals = scanf("%d %d %d %d", &pint_6, &sint_6, &tint_6, &cint_6);
    printf("Escribiste %d valores enteros. Estos fueron %d, %d, %d y  %d", totals, pint_6, sint_6, tint_6, cint_6);

}

