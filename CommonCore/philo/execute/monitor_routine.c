/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitor_routine.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:43:15 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/10/07 23:47:22 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	*monitor_routine(void *arg)
{
	t_data	*data = (t_data *)arg;
	int	i;
	int	all_full;

	while (!data->dead)
	{
		i = 0;
		all_full = 1;
		while (i < data->number_of_philos)
		{
			if (get_time_ms() - data->philos[i].last_meal_time > data->time_to_die)
			{
				print_status(&data->philos[i], "died");
				data->dead = 1;
				return (NULL);
			}
			if (data->must_eat_count > 0 && data->philos[i].meals_eaten < data->must_eat_count)
				all_full = 0;
			i++;
		}
		if (data->must_eat_count > 0 && all_full)
		{
			data->dead = 1;
			return (NULL);
		}
		usleep(1000);
	}
	return (NULL);
}
