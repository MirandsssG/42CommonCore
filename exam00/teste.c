#include <unistd.h>

void print_string(char *str)
{
    int i = -1;
    while (str[++i])
        write (1, &str[i], 1);
}

int main()
{
    char str[] = "Ola Mundo";
    print_string(str);
}