#include <stdio.h>

int str_len(char str_1[])
{
    int counter = 0;
    while (str_1[counter] != '\0')
    {
        counter++;
    }

    return counter;
}

int str_comp(const char *s1, const char *s2)
{
    while (*s1 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (int)(unsigned char)(*s1) - (int)(unsigned char)(*s2);
}

int main()
{
    char word_1[16] = "Holas";
    char word_2[16] = "Rolas";
    printf("Result: %s vs %s = %d\n",word_1, word_2, str_comp(word_1, word_2));
    printf("Length of word_1: %d\n", str_len(word_1));
    printf("Length of word_2: %d", str_len(word_2));

    return 0;
}
