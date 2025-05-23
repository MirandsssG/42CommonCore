/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_up.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluis-ma <dluis-ma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 00:09:42 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/05/23 10:52:59 by dluis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	attempt_move_up(t_data *data, int new_x, int new_y)
{
	char	next_pos;

	next_pos = data->map[new_y][new_x];
	if (next_pos == '1')
		return ;
	if (next_pos == 'C')
		data->collectible_count--;
	if (next_pos == 'E')
	{
		if (data->collectible_count == 0)
		{
			ft_printf("Congratulations, you won in %d steps!\n",
				data->steps + 1);
			ft_exit(data);
		}
		else
			return ;
	}
	data->map[data->player_y][data->player_x] = '0';
	data->map[new_y][new_x] = 'P';
	data->player_x = new_x;
	data->player_y = new_y;
	data->steps++;
	ft_printf("Steps: %d\n", data->steps);
	draw_map(data);
}

void	move_up(t_data *data)
{
	int	new_x;
	int	new_y;

	new_x = data->player_x;
	new_y = data->player_y - 1;
	attempt_move_up(data, new_x, new_y);
}
