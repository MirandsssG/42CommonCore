#include <stdio.h>

char    *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    char temp;

    while (str[len])
        len++;
    len--;
    while (len > i)
    {
        temp = str[len];
        str[len] = str[i];
        str[i] = temp;
        len--;
        i++;
    }
    return (str);
}

int main()
{
    char str[] = "Ola Mundo";
    printf("%s", ft_strrev(str));
    return (0);
}