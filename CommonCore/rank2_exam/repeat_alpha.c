/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:19:35 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/17 12:23:54 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_char (char c, int n)
{
    int i = 0;
    while (i < n)
    {
        write (1, &c, 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            char c = av[1][i];
            if (c >= 'a' && c <= 'z')
                repeat_char(c, c - 'a' + 1);
            else if (c >= 'A' && c <= 'Z')
                repeat_char(c, c - 'A' + 1);
            else
                write (1, &c, 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}