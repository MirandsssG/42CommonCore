/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:48:20 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/03/17 11:58:35 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
            i++;
        while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
        {
            write (1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}