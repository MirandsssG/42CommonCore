#include <unistd.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0')
    {
        if (s1[i] == 'a')
            return (write (1, "a", 1));
        else
            i++;
    }
    write (1, "\n", 1);
    return (0);
}

int main()
{
    char s1[] = "666";
    char s2[] = "321";
    printf("%d\n", ft_strcmp(s1, s2));
}