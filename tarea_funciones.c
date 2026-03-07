#include <stdio.h>

int multiples_of_3(int limit)
{
    int multiples_sum = 0;
    for (int i = 1; i < limit+1; i++)
    {
        if (i % 3 == 0)
        {
            multiples_sum += i;
        }
    }
    return multiples_sum;
}

void mult_table(float num)
{
    for (int i = 1; i < 11; i++)
    {
        printf("%f x %d = %.2f\n", num, i, num*i);
    }
}

int count_vocals(char message[])
{
    int vocal_total = 0;
    for (int i = 0; message[i] != '\0'; i++)
    {
        if (message[i] == 'a' || message[i] == 'e'  || message[i] == 'i' || message[i] == 'o'  || message[i] == 'u' )
        {
            vocal_total ++;
        }
    }
    return vocal_total;
}

int factorial(int num)
{
    int num_factorial = 1;
    for (int i = 1; i < num+1; i++)
    {
        num_factorial *= i;
    }
    return num_factorial;
}

int count_positives()
{
    int pos_count = 0;
    float current_option;
    do
    {
        printf("\nEscribe un número: ");
        scanf("%f", &current_option);
        if (current_option > 0)
        {
            pos_count ++;
        }
    } while (current_option != 0);
    return pos_count;
}

char lowercase_uppercase(char letter)
{
    int ascii_value_input = letter;
    return ascii_value_input - 32;

}

int main()
{
    int opcion_ejercicio;

    int upper_limit_1;
    int result_1;

    float num_2;

    char message[30];
    int vocal_total;

    int num_4;
    int num_factorial;

    int pos_count;

    char user_char;
    char upper_char;
    while (opcion_ejercicio != 7)
    {
        printf("Elige la función (1-7, las opciones están en Canvas): ");
        scanf("%d", &opcion_ejercicio);
        switch (opcion_ejercicio)
        {
            case 1:
                printf("\nEscribe un límite superior: ");
                scanf("%d", &upper_limit_1);
                result_1 = multiples_of_3(upper_limit_1);
                printf("\nLa suma de los múltiplos de 3 entre 1 y %d es: %d\n", upper_limit_1, result_1);
                break;
            case 2:
                printf("Elige un número para sacar la tabla de multiplicación: ");
                scanf("%f", &num_2);
                mult_table(num_2);
                break;
            case 3:
                getchar(); // Para no tener problemas con el buffer a la hora de escribir el mensaje :p
                printf("Escribe un mensaje en minúsculas: ");
                fgets(message, sizeof(message), stdin);
                vocal_total = count_vocals(message);
                printf("Tu mensaje tiene %d vocales!\n", vocal_total);
                break;
            case 4:
                printf("Escribe un número entero: ");
                scanf("%d", &num_4);
                num_factorial = factorial(num_4);
                printf("%d! = %d\n", num_4, num_factorial);
                break;
            case 5:
                pos_count = count_positives();
                printf("\nEscribiste %d números positivos!\n", pos_count);
                break;
            case 6:
                getchar();
                printf("Escribe una letra minúscula: ");
                scanf("%c", &user_char);
                upper_char = lowercase_uppercase(user_char);
                printf("Tu letra mayúscula es: %c\n", upper_char);
                break;
            case 7:
                break;
        }
    }
    return 0;
}