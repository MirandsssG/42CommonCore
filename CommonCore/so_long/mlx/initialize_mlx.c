/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_mlx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:35:38 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/15 22:54:25 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int initialize_mlx(t_data *data)
{
    data->mlx_ptr = mlx_init();
    if (!data->mlx_ptr)
    {
        printf("Failed to initialize MiniLibX\n");
        return (0);
    }

    data->win_ptr = mlx_new_window(data->mlx_ptr, data->columns * 64, data->rows * 64, "so_long");
    if (!data->win_ptr)
    {
        printf("Failed to create window\n");
        return (0);
    }
    if (!load_images(data))
    {
        printf("Failed to load textures\n");
        return (0);
    }
    draw_map(data);
    mlx_loop(data->mlx_ptr);
    return (1);
}