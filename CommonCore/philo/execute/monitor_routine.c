/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitor_routine.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:43:15 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/10/07 21:46:17 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	*monitor_routine(void *arg)
{
	t_data	*data = (t_data *)arg;
	int	i;

	while (!data->dead)
	{
		i = 0;
		while (i < data->number_of_philos)
		{
			if (get_time_ms() - data->philos[i].last_meal_time > data->time_to_die)
			{
				print_status(&data->philos[i], "died");
				data->dead = 1;
				return (NULL);
			}
			i++;
		}
		usleep(1000);
	}
	return (NULL);
}
