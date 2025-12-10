#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    char temp;
    while (str[len])
        len++;
    len--;
    while (i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
    }
}

7 6 5 4 3 2 1 \0
i i i  len len len