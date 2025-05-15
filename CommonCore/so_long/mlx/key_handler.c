/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 23:43:37 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/16 00:08:35 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int key_handler(int key_pressed, t_data *data)
{
    if (key_pressed == ESC)
        ft_exit(data);
    else if (key_pressed == W_KEY || key_pressed == UP_KEY)
        move_up(data);
    else if (key_pressed == A_KEY || key_pressed == LEFT_KEY)
        move_left(data);
    else if (key_pressed == D_KEY || key_pressed == RIGHT_KEY)
        move_right(data);
    else if (key_pressed == S_KEY || key_pressed == DOWN_KEY)
        move_down(data);
    return (0);
}