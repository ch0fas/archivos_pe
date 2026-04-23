#include <stdio.h>

typedef struct
{
    short int s;
    char c;
    int i;
} Structb_t;

typedef struct
{
    char c;
    double d;
    int i;
} Structc_t;

int main()
{
    Structb_t b1;
    Structc_t c1;
    printf("%d, %d", sizeof(b1), sizeof(c1));
    return 0;
}
