/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:56:51 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/01 19:04:22 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int space = 0;
    if (ac == 2)
    {
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while (av[1][i] != '\0')
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
                space = 1;
            if (!(av[1][i] == ' ' || av[1][i] == '\t'))
            {
                if (space == 1)
                {
                    write (1, &" ", 1);
                    space = 0;
                }
                write (1, &av[1][i], 1);
            }
            i++;
        }
    }
    write (1, "\n", 1);
}