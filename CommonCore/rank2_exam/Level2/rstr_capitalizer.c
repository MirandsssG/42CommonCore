/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:54:56 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/04/15 11:59:28 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 1;
    
    if (ac >= 2)
    {
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
                if (av[i][j + 1] == ' ' || av[i][j + 1] == '\t' || av[i][j + 1] == '\0')
                {
                    if (c >= 'a' && c <= 'z')
                        c = c - 32;
                }
                write (1, &c, 1);
                j++;
            }
            i++;
            write (1, "\n", 1);
        }
    }
    else
        write (1, "\n", 1);
    return (0);
}