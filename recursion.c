#include <stdio.h>

void num_descent(int top)
{
    if (top == 0)
    {
        return;
    }
    printf("%d\n", top);
    num_descent(top-1);
}

int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    } else if (num == 1) {
        return 1;
    }
    else
    {
        return fibonacci(num-1)+fibonacci(num-2);
    }
}

int main()
{
    num_descent(10);
    printf("El resultado Fibonacci es: %d", fibonacci(4));
    return 0;
}
