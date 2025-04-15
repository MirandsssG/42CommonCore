/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:50:07 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/15 11:54:01 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;

    while (str[i])
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result);
}

void print_hex(int num)
{
    char hex[] = "0123456789abcdef";
    
    if (num >= 16)
        print_hex(num / 16);
    write (1, &hex[num % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    write (1, "\n", 1);
}