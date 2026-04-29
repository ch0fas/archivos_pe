#include <stdio.h>

struct Usuario { char inicial; double saldo; int edad; char genero; };
struct Sensor { float temperatura; char id; long tiempo; short estado; };
struct Producto { char codigo; int cantidad; double precio; short descuento; };
struct Paquete { short tipo; char prioridad; int tamaño; char checksum; };
struct Datos { short id; char categoria; int cantidad; short nivel; double promedio; char tipo; };

struct Usuario_Optimo {double saldo; int edad; char inicial; char genero; };
struct Sensor_Optimo { long tiempo; float temperatura; short estado; char id; };
struct Producto_Optimo { double precio; int cantidad; short descuento; char codigo; };
struct Paquete_Optimo { int tamaño; short tipo; char checksum; char prioridad; };
struct Datos_Optimo {double promedio; int cantidad; short id; short nivel; char categoria; char tipo; };

int main()
{
    printf("\nTamaño de struct Usuario: %zu bytes", sizeof(struct Usuario));
    printf("\nTamaño de struct Sensor: %zu bytes", sizeof(struct Sensor));
    printf("\nTamaño de struct Producto: %zu bytes", sizeof(struct Producto));
    printf("\nTamaño de struct Paquete: %zu bytes", sizeof(struct Paquete));
    printf("\nTamaño de struct Datos: %zu bytes", sizeof(struct Datos));

    printf("\n\nTamaño de struct Usuario_Optimo: %zu bytes", sizeof(struct Usuario_Optimo));
    printf("\nTamaño de struct Sensor_Optimo: %zu bytes", sizeof(struct Sensor_Optimo));
    printf("\nTamaño de struct Producto_Optimo: %zu bytes", sizeof(struct Producto_Optimo));
    printf("\nTamaño de struct Paquete_Optimo: %zu bytes", sizeof(struct Paquete_Optimo));
    printf("\nTamaño de struct Datos_Optimo: %zu bytes", sizeof(struct Datos_Optimo));
    return 0;
}