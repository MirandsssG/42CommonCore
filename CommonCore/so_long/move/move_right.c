/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 00:09:39 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/23 20:52:30 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move_right(t_data *data)
{
	int	new_x;
	int	new_y;

	new_x = data->player_x + 1;
	new_y = data->player_y;
	data->curr_pos = data->next_pos;
	attempt_move(data, new_x, new_y);
}
