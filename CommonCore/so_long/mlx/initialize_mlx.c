/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_mlx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:35:38 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/15 19:09:53 by mirandsssg       ###   ########.fr       */
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

    data->win_ptr = mlx_new_window(data->mlx_ptr, 800, 600, "My Window");
    if (!data->win_ptr)
    {
        printf("Failed to create window\n");
        return (0);
    }

    mlx_loop(data->mlx_ptr);
    return (1);
}