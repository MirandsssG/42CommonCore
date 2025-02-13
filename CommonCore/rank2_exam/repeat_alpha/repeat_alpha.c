#include <unistd.h>

void repeat_char(char c, int n)
{
    int i = 0;

    while (i < n)
    {
        write (1, &c, 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            char c = av[1][i];
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                repeat_char(c, c - 'a' + 1);
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                repeat_char(c, c - 'A' + 1);
            else
                write (1, &c, 1);
            i++;
        }
    }
    write (1, "\n", 1);
}