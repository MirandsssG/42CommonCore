#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 123;
    int b = 456;
    printf("a=%d, b=%d\n", a, b);
    ft_swap(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}