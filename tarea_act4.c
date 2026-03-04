#include <stdio.h>

int revert_digits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int opcion_ejercicio;
    int contador_1 = 1;
    int num_secret = 4;
    int num_guess;
    int sum_to_average = 0;
    int num_choice = 1;
    int num_amount = -1;
    float average;
    int num_to_reverse;
    int rev_num;
    while (opcion_ejercicio != 5)
    {
        printf("Elige el ejercicio (1, 2, 3, 4, 5 (exit)): ");
        scanf("%d", &opcion_ejercicio);
        switch (opcion_ejercicio)
        {
            case 1:
                printf("\nContador Simple\n");
                while (contador_1 < 11)
                {
                    printf("%d\n", contador_1);
                    contador_1++;
                }
                contador_1 = 1;
                break;

            case 3:
                printf("Adivina el número!\n");
                while (num_guess != num_secret)
                {
                    printf("Adivina un número: ");
                    scanf("%d", &num_guess);
                }
                printf("Adivinaste el número!\n");
                num_guess = 0;
                break;

            case 4:
                printf("Promedios\n");
                while (num_choice > 0)
                {
                    printf("\nEscribe un número (o 0 si ya no quieres poner más): ");
                    scanf("%d", &num_choice);
                    num_amount++;
                    sum_to_average += num_choice;
                }
                average = sum_to_average / num_amount;
                printf("Tu suma total es: %d. El promedio es: %f\n", sum_to_average, average);
                sum_to_average = 0;
                num_choice = 0;
                num_amount = -1;
                break;

            case 2:
                printf("Reverse number\n");
                printf("Choose a number to reverse: ");
                scanf("%d", &num_to_reverse);
                rev_num = revert_digits(num_to_reverse);
                printf("\nReversed int: %d\n", rev_num);
                break;

            case 5:
                break;

        }
    }
    return 0;
}
