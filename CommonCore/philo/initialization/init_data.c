/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 20:03:22 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/11/10 14:17:12 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

long long	get_time_ms(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000LL + tv.tv_usec / 1000);
}

int	init_data(t_data *data)
{
	int	i;

	data->dead = 0;
	data->start_time = get_time_ms();
	data->forks = malloc(sizeof(pthread_mutex_t) * data->number_of_philos);
	if (!data->forks)
		return (printf("Error: malloc (forks)\n"), 1);
	i = 0;
	while (i < data->number_of_philos)
	{
		if (pthread_mutex_init(&data->forks[i], NULL) != 0)
		{
			printf("Error: forks mutex init\n");
			cleanup_data(data);
			return (1);
		}
		i++;
	}
	if (pthread_mutex_init(&data->lock_print, NULL) != 0)
	{
		printf("Error: lock print mutex init\n");
		cleanup_data(data);
		return (1);
	}
	if (pthread_mutex_init(&data->dead_mutex, NULL) != 0)
	{
		printf("Error: dead mutex init\n");
		cleanup_data(data);
		return (1);
	}
	data->philos = malloc(sizeof(t_philo) * data->number_of_philos);
	if (!data->philos)
	{
		printf("Error: malloc (philos)\n");
		cleanup_data(data);
		return (1);
	}
	i = 0;
	while (i < data->number_of_philos)
	{
		data->philos[i].id = i + 1;
		data->philos[i].meals_eaten = 0;
		data->philos[i].last_meal_time = data->start_time;
		data->philos[i].data = data;
		data->philos[i].left_fork = &data->forks[i];
		data->philos[i].right_fork = &data->forks[(i + 1) % data->number_of_philos];
		if (pthread_mutex_init(&data->philos[i].meal_mutex, NULL) != 0)
		{
			printf("Error: meal mutex init\n");
			cleanup_data(data);
			return (1);
		}
		i++;
	}
	return (0);
}
