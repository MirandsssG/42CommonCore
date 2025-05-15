/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 23:42:26 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/15 22:54:33 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        printf("Usage: %s <filename>\n", av[0]);
        return (1);
    }
    t_data data;
    if (initialize_vars(av[1], &data))
        return (1);
    if (!initialize_mlx(&data))
        return(1);
    return (0);
}