#include <stdio.h>

int main()
{
    int num = 2147483647;
    float decimal = 5.7;
    double big_decimal = 4.9;
    char letter = 'C';
    char word[] = "Hello!";

    short int smol_int = 8;
    long big_int = 9223372036854775807;
    unsigned int no_signature = 4294967295; // Quitando el signo, se puede guardar el doble de números positivos
    const int link = 2;

    printf("El entero %d ocupa %lu bytes en memoria\n", num, sizeof(num));
    printf("El float %f ocupa %lu bytes en memoria\n", decimal, sizeof(decimal));
    printf("El double %lf ocupa %lu bytes en memoria\n", big_decimal, sizeof(big_decimal));
    printf("El char %c ocupa %lu bytes en memoria\n", letter, sizeof(letter));
    printf("El char[] %s ocupa %lu bytes en memoria\n\n", word, sizeof(word));

    printf("El small integer %d ocupa %lu bytes en memoria\n", smol_int, sizeof(smol_int));
    printf("El long integer %ld ocupa %lu bytes en memoria\n", big_int, sizeof(big_int));
    printf("El unsigned integer %u ocupa %lu bytes en memoria\n", no_signature, sizeof(no_signature));
    return 0;
}
