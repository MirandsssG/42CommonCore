/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 19:18:51 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/27 19:27:35 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putstr(char *str)
{
    int i = 0;
    
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
}

int main (int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        int j = 0;
        int c = 0;
        int len = ft_strlen(av[1]);

        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    c++;
                    j++;
                    break;
                }
                j++;
            }
            if (c == len)
            {
                ft_putstr(av[1]);
                break;
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}