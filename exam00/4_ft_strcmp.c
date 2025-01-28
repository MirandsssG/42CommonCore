#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] && s2[i])
    {
        if (s1[i] == s2[i])
            i++;
        if (s1[i] < s2[i] || s1[i] > s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}

int main()
{
    char *s1 = "123456";
    char *s2 = "123456";
    printf ("%d", ft_strcmp(s1, s2));
    return (0);
}