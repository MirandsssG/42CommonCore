/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:51:09 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/11/10 14:49:58 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	print_status(t_philo *philo, char *status)
{
	long long	time;

	pthread_mutex_lock(&philo->data->lock_print);
	pthread_mutex_lock(&philo->data->dead_mutex);
	if (philo->data->dead)
	{
		pthread_mutex_unlock(&philo->data->dead_mutex);
		pthread_mutex_unlock(&philo->data->lock_print);
		return;
	}
	pthread_mutex_unlock(&philo->data->dead_mutex);
	time = get_time_ms() - philo->data->start_time;
	printf("%lld %d %s\n", time, philo->id, status);
	pthread_mutex_unlock(&philo->data->lock_print);
}
