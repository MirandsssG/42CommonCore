/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 00:09:39 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/16 00:31:52 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    move_right(t_data *data)
{
    int x = data->player_x;
    int y = data->player_y;
    char next_pos = data->map[y][x + 1];
    if (next_pos == '1')
        return;
    if (next_pos == 'C')
        data->collectible_count--;
    if (next_pos == 'E')
    {
        if (data->collectible_count == 0)
        {
            ft_printf("Congratulations, you won in %d steps!\n", data->steps + 1);
            ft_exit(data);
        }
        else
            return;
    }
    data->map[y][x] = '0';
    data->map[y][x + 1] = 'P';
    data->player_x = x + 1;
    data->steps++;
    ft_printf("Steps: %d\n", data->steps);
    draw_map(data);
}