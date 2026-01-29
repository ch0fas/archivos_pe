#include <stdint.h>
#include <stdio.h>

int main()
{
    float foo;
    char bar[20]; // Inicializando una variable para el nombre con máximo 20 caracteres
    double spam;
    int eggs;
    char letter;

    // FLow
    scanf("%f", &foo);
    printf("The number typed is %.1f\n", foo);
    scanf("%s", bar);
    printf("The name given is %s\n", bar);
    scanf("%lf", &spam);
    printf("The double given is %lf\n", spam);
    scanf(" %c", &letter);
    printf("The char given is %c\n", letter);
    scanf("%d", &eggs);
    printf("The whole number given is %d\n\n", eggs);
    printf("Write an integer and character at once!  ");
    int n = scanf("%i %c", &eggs, &letter);
    printf("Number %d, Letter %c\n", eggs, letter);
    printf("We stored %i items", n);

    return 0;
}
