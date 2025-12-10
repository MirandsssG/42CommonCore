/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 20:38:13 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/10/07 20:41:03 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	cleanup_data(t_data *data)
{
	int	i;

	if (data->forks)
	{
		i = 0;
		while (i < data->number_of_philos)
		{
			pthread_mutex_destroy(&data->forks[i]);
			i++;
		}
		free(data->forks);
		data->forks = NULL;
	}
	pthread_mutex_destroy(&data->lock_print);
	if (data->philos)
	{
		free(data->philos);
		data->philos = NULL;
	}
}
