/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:05:41 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/01 19:12:59 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] != '\0')
    {
        char c = str[i];
        int digit;

        if (c >= '0' && c<= '9')
            digit = c - '0';
        else if (c >= 'a' && c<= 'f')
            digit = c - 'a' + 10;
        else if (c >= 'A' && c<= 'F')
            digit = c - 'A' + 10;
        else
            break;
        if (digit >= str_base)
            break;
        result = result * str_base + digit;
        i++;
    }
    return (sign * result);
}

int main (int ac, char **av)
{
    char str[] = "d3ef";
    int str_base = 16;
    
    printf("%d", ft_atoi_base(str, str_base));
}