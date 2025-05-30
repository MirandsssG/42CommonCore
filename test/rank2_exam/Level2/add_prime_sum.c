/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:46:55 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/31 16:57:47 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int result = 0;
    int i = 0;

    while (str[i])
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result);
}

void    ft_putnbr (int num)
{
    char digit;
    if (num >= 10)
        ft_putnbr(num / 10);
    digit = num % 10 + '0';
    write (1, &digit, 1);
}

int ft_is_prime(int num)
{
    int i = 2;

    if (num <= 1)
        return (0);
    while (i * i <= num)
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int num = ft_atoi(av[1]);
        int sum = 0;
        
        while (num > 0)
        {
            if (ft_is_prime(num))
                sum += num;
            num--;
        }
        ft_putnbr(sum);
        write (1, "\n", 1);
        return (0);
    }
    write (1, "0\n", 2);
    return (0);
}