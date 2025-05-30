/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:01:18 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/15 12:17:07 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i = 1;
        int flag = 0;
        while (i < ac)
        {
            int j = 0;
            char c;
            while (av[i][j])
            {
                if (av[i][j] >= 'A' && av[i][j] <= 'Z')
                    c = av[i][j] + 32;
                else
                    c = av[i][j];
                if (c == ' ' || av[i][j] == '\t')
                    flag = 1;
                if (c >= 'a' && c <= 'z' && (flag == 1 || j == 0))
                {
                    c = c - 32;
                    flag = 0;
                }
                write (1, &c, 1);
                j++;
            }
            write (1, "\n", 1);
            i++;
        }
    }
    else
        write (1, "\n", 1);
    return (0);
}