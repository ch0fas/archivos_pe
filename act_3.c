#include <stdio.h>

int main()
{
    // Declarando variables
    int edad_usuario;
    int num_usuario;
    float puntuacion_usuario;
    char puntuacion_gringa;
    float lado_a;
    float lado_b;
    float lado_c;
    int seven_eleven;
    char inicial_semana;
    int cali_usuario;

    //Flujo del programa
    printf("Ejercicio 1 -> Mayoría de Edad\n");
    printf("Escribe tu edad: ");
    scanf("%d", &edad_usuario);
    if (edad_usuario >= 18) printf("\nEres mayor de edad!\n\n");
    if (edad_usuario < 18) printf("\nEres menor de edad!\n\n");

    printf("Ejercicio 2 -> Divisible entre 3 y 5\n");
    printf("Escribe un número entero: ");
    scanf("%d", &num_usuario);
    if (num_usuario % 3 == 0 && num_usuario % 5 == 0)
    {
        printf("\nEste número si es divisible tanto por 3 como por 5!!\n\n");
    } else
    {
        printf("Este número no es divisible entre 3 y 5 :(\n\n");
    }

    printf("Ejercicio 3 -> Calificación según puntaje\n");
    printf("Escribe tu calificación numérica: ");
    scanf("%f", &puntuacion_usuario);
    if (puntuacion_usuario >= 90) puntuacion_gringa = 'A';
    if (puntuacion_usuario >= 80 && puntuacion_usuario < 90) puntuacion_gringa = 'B';
    if (puntuacion_usuario >= 70 && puntuacion_usuario < 80) puntuacion_gringa = 'C';
    if (puntuacion_usuario >= 60 && puntuacion_usuario < 70) puntuacion_gringa = 'D';
    if (puntuacion_usuario < 60) puntuacion_gringa = 'F';
    printf("\nTu calificación es: %c\n\n", puntuacion_gringa);

    printf("Ejercicio 4 -> Triángulos\n");
    printf("Escribe la longitud de los 3 lados de tu triángulo, separadas por un espacio: ");
    scanf("%f %f %f", &lado_a, &lado_b, &lado_c);
    if (lado_a + lado_b > lado_c && lado_a + lado_c > lado_b && lado_b + lado_c > lado_a)
    {
        //Si es un triángulo
        if (lado_a == lado_b && lado_b == lado_c)
        {
            printf("Este es un triángulo equilátero!");
        } else if (lado_a == lado_b || lado_a == lado_c || lado_b == lado_c)
        {
            printf("Este es un triángulo isósceles");
        } else
        {
            printf("Este es un triángulo escaleno!");
        }
    } else
    {
        printf("Este no es un triángulo");
    }
    printf("\n\n");

    printf("Ejercicio 5 -> Seven Eleven\n");
    printf("Escribe un número entero: ");
    scanf("%d", &seven_eleven);
    if (seven_eleven % 7 == 0 && seven_eleven % 11 == 0) printf("Tu número es múltiplo de 7 Y 11!\n");
    if (seven_eleven % 7 == 0 && seven_eleven % 11 != 0) printf("Tu número es múltiplo de 7 pero no de 11");
    if (seven_eleven % 7 != 0 && seven_eleven % 11 == 0) printf("Tu número es múltiplo de 11 pero no de 7");
    if (seven_eleven % 7 != 0 && seven_eleven % 11 != 0) printf("Tu número no es múltiplo ni de 7 ni de 11");
    printf("\n\n");

    printf("Ejercicio 6 -> Fin de o Entre semana\n");
    printf("Escribe la inicial de un día de la semana (l,m,M,j,v,s,d): ");
    scanf(" %c", &inicial_semana);
    switch (inicial_semana)
    {
        case 's':
            printf("Es fin de semana!");
            break;
        case 'd':
            printf("Es fin de semana!");
            break;
        default: printf("Es entre semana");
    }
    printf("\n\n");

    printf("Ejercicio 7 -> Calificación Según Puntaje 2: Electric Boogaloo\n");
    printf("Escribe una calificación entera, entre 0 y 10: ");
    scanf("%d", &cali_usuario);

    switch (cali_usuario)
    {
        case 9 ... 10:
            printf("Puntuación -> A");
            break;
        case 8:
            printf("Puntuación -> B");
            break;
        case 7:
            printf("Puntuación -> C");
            break;
        case 6:
            printf("Puntuación -> D");
            break;
        case 0 ... 5: // Rango entre 0 y 5, inclusivo de los extremos
            printf("Puntuación -> F");
            break;
        default: printf("Calificación Inválida!");
    }
    return 0;
}
