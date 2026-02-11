/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_routine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:27:36 by mirandsssg        #+#    #+#             */
/*   Updated: 2026/02/11 15:07:06 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	*philo_routine(void *arg)
{
	t_philo	*philo;

	philo = (t_philo *)arg;
	while (1)
	{
		pthread_mutex_lock(&philo->data->dead_mutex);
		if (philo->data->dead)
		{
			pthread_mutex_unlock(&philo->data->dead_mutex);
			break ;
		}
		pthread_mutex_unlock(&philo->data->dead_mutex);
		take_forks(philo);
		eat(philo);
		put_forks(philo);
		sleep_and_think(philo);
	}
	return (NULL);
}
