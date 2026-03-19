#include <stdio.h>

void contador(int n)
{
    if (n == 0)
    {
        return;
    }
    contador(n-1);
    printf("%d ", n);
}

int main()
{
    contador(3);
    return 0;
}
