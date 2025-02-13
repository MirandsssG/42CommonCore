#include <stdio.h>

int	ft_strlen(char *str)
{
    int i = -1;
    while (str[i])
        i++;
    return (i);
}

int main()
{
    char str[] = "Ola Mundo";
    printf ("%d", ft_strlen(str));
    return (0);
}