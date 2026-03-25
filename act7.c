#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int suma_naturales(int n)
{
    if (n == 1)
    {
        return 1;
    } else
    {
        return n + suma_naturales(n-1);
    }
}

int cuenta_digitos(int n)
{
    static int num_digitos;

    if (n > 0)
    {
        num_digitos += 1;
        cuenta_digitos(n / 10);
    }

    return num_digitos;
}

float media(int arr[], int len_array)
{
    float sum_total = 0;
    for (int i = 0; i < len_array; i++)
    {
        sum_total += arr[i];
    }
    return sum_total / len_array;
}

// Implementación sencilla del algoritmo Bubble Sort

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void b_sort(int arr[], int len_array)
{
    bool swapped;
    for (int i = 0; i < len_array-1; i++)
    {
        swapped = false;
        for (int j = 0; j < len_array - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }
}

float mediana(int arr[], int len_array)
{
    b_sort(arr, len_array);

    if (len_array % 2 == 0)
    {
        return (arr[len_array/2-1]+arr[len_array/2]) / 2.0;
    } else
    {
        return arr[len_array/2];
    }
}

int moda(int arr[], int len_array)
{
    int cuenta_max = 0, mode = arr[0];
    for (int i = 0; i < len_array; i++)
    {
        int cuenta = 0;
        for (int j = 0; j < len_array; j++)
        {
            if (arr[j] == arr[i])
            {
                cuenta++;
            }
        }
        if (cuenta > cuenta_max)
        {
            cuenta_max = cuenta;
            mode = arr[i];
        }
    }

    return mode;
}

float standesv(int arr[], int len_array)
{
    float media_arreglo = media(arr,len_array);
    float valores = 0;
    for (int i = 0; i < len_array; i++)
    {
        valores += pow(arr[i] - media_arreglo,2);
    }
    float variance = valores / len_array;
    return sqrt(variance);
}

int num_mayor(int arr[], int len_array)
{
    b_sort(arr,len_array);
    return arr[len_array-1];
}

int num_menor(int arr[], int len_array)
{
    b_sort(arr,len_array);
    return arr[0];
}

int biggest_index(int arr[], int len_array)
{
    int answer = 0;
    int biggest_so_far = arr[0];
    for (int i = 1; i < len_array; i++)
    {
        if (arr[i] > biggest_so_far)
        {
            biggest_so_far = arr[i];
            answer = i;
        }
    }

    return answer;
}

int main()
{
    int opcion_ejercicio = 5;
    int tope_naturales;
    int para_contar;
    int len_array;
    int example_array[5] = {2, 10, 3, 8, 4};

    while (opcion_ejercicio != 0)
    {
        printf("Elige el ejercicio (1,2,3,4). Escribe 0 para salir: ");
        scanf("%d", &opcion_ejercicio);
        switch (opcion_ejercicio)
        {
            case 1:
            printf("\nSuma naturales\nEscribe el número al que quieres llegar: ");
            scanf("%d", &tope_naturales);
            printf("\nLa suma de todos los naturales entre 1 y %d es %d\n", tope_naturales, suma_naturales(tope_naturales));
            break;

            case 2:
            printf("\nContar Digitos\nEscribe un entero: ");
            scanf("%d", &para_contar);
            printf("\n%d tiene %d digitos\n", para_contar, cuenta_digitos(para_contar));
            break;

            case 3:
            {
                printf("\nArreglos\nCuantos numeros quieres ingresar? ");
                scanf("%d", &len_array);
                int arreglo[len_array];
                for (int i = 0; i < len_array; i++)
                {
                    printf("\nElemento %d: ", i+1);
                    scanf("%d", &arreglo[i]);
                }

                printf("\nLa media de tu arreglo es: %.2f\n", media(arreglo, len_array));
                printf("\nLa mediana de tu arreglo es: %.2f\n", mediana(arreglo, len_array));
                printf("\nLa moda en tu arreglo es: %d\n", moda(arreglo,len_array));
                printf("\nDesviacion Estandar: %.5f\n", standesv(arreglo, len_array));
                printf("\nEl numero mas grande ingresado fue: %d. El menor fue: %d\n", num_mayor(arreglo,len_array), num_menor(arreglo,len_array));
                break;
            }

            case 4:
            printf("\nEn un arreglo de ejemplo ({2,10,3,8,4}) el indice con el número más grande es: %d\n", biggest_index(example_array, 5));
            break;

            case 0:
            break;

        }
    }

    return 0;
}