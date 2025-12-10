/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 06:28:34 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/02 06:30:14 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int num)
{
    int digit;

    while (num >= 10)
        ft_putnbr(num / 10);
    digit = (num % 10) + '0';
    write (1, &digit, 1);
}

int main (int ac, char **av)
{
    (void)av;
    
    ft_putnbr(ac - 1);
    write (1, "\n", 1);
    return (0);
}