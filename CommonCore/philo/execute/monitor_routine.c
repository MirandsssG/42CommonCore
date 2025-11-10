/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitor_routine.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:43:15 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/11/10 14:25:21 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	*monitor_routine(void *arg)
{
	t_data		*data = (t_data *)arg;
	int			i;
	int			all_full;
	long long	time_diff;

	while (1)
	{
		i = 0;
		all_full = 1;
		while (i < data->number_of_philos)
		{
			pthread_mutex_lock(&data->philos[i].meal_mutex);
			time_diff = get_time_ms() - data->philos[i].last_meal_time;
			if (time_diff > data->time_to_die)
			{
				pthread_mutex_lock(&data->dead_mutex);
				data->dead = 1;
				pthread_mutex_unlock(&data->dead_mutex);
				print_status(&data->philos[i], "died");
				pthread_mutex_unlock(&data->philos[i].meal_mutex);
				return (NULL);
			}
			if (data->must_eat_count > 0 && data->philos[i].meals_eaten < data->must_eat_count)
				all_full = 0;
			pthread_mutex_unlock(&data->philos[i].meal_mutex);
			i++;
		}
		if (data->must_eat_count > 0 && all_full)
		{
			pthread_mutex_lock(&data->dead_mutex);
			data->dead = 1;
			pthread_mutex_unlock(&data->dead_mutex);
			return (NULL);
		}
		pthread_mutex_lock(&data->dead_mutex);
		if (data->dead)
		{
			pthread_mutex_unlock(&data->dead_mutex);
			break;
		}
		pthread_mutex_unlock(&data->dead_mutex);
		usleep(1000);
	}
	return (NULL);
}
