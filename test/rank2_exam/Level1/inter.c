/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:52:35 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/27 16:36:54 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int iter(char *src, int i, char c)
{
    int j = 0;
    while (j < i)
    {
        if (src[j] == c)
            return (1);
        j++;
    }
    return (0);
}

int main(int ac, char **av)
{
    int i = 0;
    
    if (ac == 3)
    {
        while (av[1][i] != '\0')
        {
            if (!iter(av[1], i, av[1][i]))
            {
                int j = 0;
                while (av[2][j])
                {
                    if (av[2][j] == av[1][i])
                    {
                        write (1, &av[1][i], 1);
                        break;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}