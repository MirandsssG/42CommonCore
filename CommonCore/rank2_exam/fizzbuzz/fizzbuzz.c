#include <unistd.h>
#include <stdio.h>

void putnbr(int nb)
{
    char str[10] = "0123456789";

    if (nb > 9)
        putnbr(nb / 10);
    write(1, &str[nb % 10], 1);
}

int main()
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 5 == 0 && i % 3 == 0)
            write (1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write (1, "fizz", 4);
        else if (i % 5 == 0)
            write (1, "buzz", 4);
        else
            putnbr(i);
        i++;
        write (1, "\n", 1);
    }
    return (0);
}