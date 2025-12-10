#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 5;
    int b = 7;
    printf("%d , %d\n", a, b);
    ft_swap(&a, &b);
    printf("A = %d , B = %d", a, b);
}