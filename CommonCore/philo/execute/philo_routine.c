/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_routine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirandsssg <mirandsssg@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:27:36 by mirandsssg        #+#    #+#             */
/*   Updated: 2025/10/07 21:30:02 by mirandsssg       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	*philo_routine(void *arg)
{
	t_philo	*philo = (t_philo *)arg;

	while (!philo->data->dead)
	{
		take_forks(philo);
		eat(philo);
		put_forks(philo);
		sleep_and_think(philo);
	}
	return (NULL);
}
