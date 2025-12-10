/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:32:53 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/20 18:37:53 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    char c;
    if (ac == 2)
    {
        while (av[1][i])
        {
            c = av[1][i];
            if (c >= 'A' && c <= 'Z')
                c = 'Z' - c + 'A';
            else if (c >= 'a' && c <= 'z')
                c = 'z' - c + 'a';
            write (1, &c, 1);
            i++;
        }
    }
    write (1, "\n", 1);
}