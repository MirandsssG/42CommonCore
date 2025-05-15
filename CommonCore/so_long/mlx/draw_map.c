/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 22:43:44 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/15 22:51:08 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int    draw_map(t_data *data)
{
    int y = 0;
    while (y < data->rows)
    {
        int x = 0;
        while (x < data->columns)
        {
            char pos = data->map[y][x];
            void *img = NULL;
            if (pos == '1')
                img = data->img_wall;
            else if (pos == '0')
                img = data->img_floor;
            else if (pos == 'P')
                img = data->img_player;
            else if (pos == 'E')
                img = data->img_exit;
            else if (pos == 'C')
                img = data->img_collectible;
            if (img)
                mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, img, x * 64, y * 64);
            x++;
        }
        y++;
    }
    return (1);
}