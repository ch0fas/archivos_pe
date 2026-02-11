#include <stdio.h>

int problem_7(int a,int b,int c)
{
    return ++a * b-- + (c << 1) > 12 && (b|=2);
}

int problem_10(int p, int q)
{
    return (p%q == 0 || --q) ? (p >>=1):(q+=5);
}

int problem_13(int x, int y, int z)
{
    return (x & y) + (z*3) <= 10 ? (x++^y) : (--y && z);
}

int main()
{
    int r = problem_7(5, 3, 2);
    printf("Problem 7: %d\n", r);
    r = problem_10(6, 2);
    printf("Problem 10: %d\n", r);
    r = problem_13(7, 4, 1);
    printf("Problem 13: %d\n", r);
    return 0;
}