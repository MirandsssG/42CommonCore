/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 19:08:03 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/27 19:16:54 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int iter(char *str, char c, int i)
{
    int j = 0;

    while (j < i && str[j])
    {
        if (str[j] == c)
            return (1);
        j++;
    }
    return (0);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    if (ac == 3)
    {
        while (av[1][i])
        {
            if (!iter(av[1], av[1][i], i))
                write (1, &av[1][i], 1);
            i++;
        }
        while (av[i][j])
        {
            if ((!iter(av[2], av[2][j], j)) && (!iter(av[1], av[2][j], i)))
                write(1, &av[2][j], 1);
            j++;
        }
    }
    write (1, "\n", 1);
    return (0);
}