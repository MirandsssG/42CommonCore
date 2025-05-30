/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:24:42 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/15 12:34:56 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i])
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}

void ft_putnbr(int n)
{
    char digit[] = "0123456789";
    if (n >= 10)
        ft_putnbr(n / 10);
    write (1, &digit[n % 10], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int n = ft_atoi(av[1]);
        if (n > 0)
        {
            int i = 1;
            while (i <= 9)
            {
                ft_putnbr(i);
                write (1, " x ", 3);
                ft_putnbr(n);
                write (1, " = ", 3);
                ft_putnbr(i * n);
                write (1, "\n", 1);
                i++;
            }
        }
    }
    else
        write (1, "\n", 1);
    return (0);
}