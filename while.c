#include <stdio.h>
#include <unistd.h>

int main()
{
    int b = 10;
    printf("New Year Countdown!\n");
    while (b > 0)
    {
        sleep(1);
        printf("%d\n", b);
        b--;
    }
    sleep(1);
    printf("Happy New Year!");
    return 0;
}
