#include <unistd.h>

void	ft_putstr(char *str)
{
    int i = -1;
    while (str[i++])
        write(1, &str[i], 1);
}

int main()
{
    char str[] = "Ola Mundo";
    ft_putstr(str);
    return (0);
}