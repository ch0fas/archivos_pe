#include <stdio.h>
#include <string.h>

int str_comp(char str_1[], char str_2[])
{
    char elem_1 = (int)str_1[0];
    char elem_2 = (int)str_2[0];
    printf("%d %d\n", elem_1, elem_2);

    if (elem_1 == elem_2)
    {
        return 0;
    } else if (elem_1 < elem_2)
    {
        return -1;
    } else if (elem_1 > elem_2)
    {
        return 1;
    }
    return 0;
}

int str_len(char str_1[])
{
    return strlen(str_1);
}



int main()
{
    char word_1[16] = "AI";
    char word_2[16] = "FOO";
    printf("Result: %d\n", str_comp(word_1, word_2));
    printf("Length of word_1: %d\n", str_len(word_1));
    printf("Length of word_2: %d", str_len(word_2));

    return 0;
}
